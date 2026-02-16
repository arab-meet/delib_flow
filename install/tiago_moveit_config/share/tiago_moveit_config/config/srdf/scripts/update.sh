#!/bin/bash
set -e
set -o pipefail
ulimit -m 8048000
pal_moveit_config_generator=$(ros2 pkg prefix pal_moveit_config_generator)
source "$pal_moveit_config_generator/share/pal_moveit_config_generator/srdf_utils.sh" "$(dirname "${BASH_SOURCE[0]}")/../tiago.srdf.xacro"

# crawl all end effectors and generate the corresponding subtree SRDF
for end_effector_file in "$srdf_folder"/end_effectors/*.srdf.xacro; do
    end_effector=$(basename "$end_effector_file" .srdf.xacro)
    if [ "$end_effector" = "no-end-effector" ]; then
        end_effector_value="no-ee"
    else
        end_effector_value="$end_effector"
    fi
    for ft_sensor in no-ft-sensor schunk-ft; do
        args=("ft_sensor:=$ft_sensor" end_effector:="$end_effector")
        if [ "$ft_sensor" != "no-ft-sensor" ]; then
            generate_disable_collisions_subtree arm_tool_link "${end_effector_value}_${ft_sensor}" "${end_effector_value}" "${args[@]}"
        else
            generate_disable_collisions_subtree arm_tool_link "${end_effector_value}"  "" "${args[@]}"
        fi
    done
done

for base_type in pmb2 omni_base; do
    # Generate base disable collision pairs
    prefix="${robot}"
    if [ "$base_type" = "omni_base" ]; then
        prefix="${robot}_omni"
    fi

    generate_srdf "${prefix}_no-arm" "" "arm_model":="no-arm" base_type:="$base_type" ft_sensor:="no-ft-sensor" end_effector:="no-end-effector" # base & torso only
    generate_disable_collisions "${prefix}_no-ee" "${prefix}_no-arm" base_type:="$base_type" ft_sensor:="no-ft-sensor" end_effector:="no-end-effector" # plus arm
    generate_disable_collisions "${prefix}_no-ee_schunk-ft" "${prefix}_no-ee" base_type:="$base_type" ft_sensor:=schunk-ft end_effector:="no-end-effector" # plus FT sensor

    # crawl all end effectors and generate the corresponding SRDF
    for end_effector_file in "$srdf_folder"/end_effectors/*.srdf.xacro; do
        end_effector=$(basename "$end_effector_file" .srdf.xacro)
        if [ "$end_effector" = "no-end-effector" ]; then
            end_effector_value="no-ee"
        else
            end_effector_value="$end_effector"
        fi
        for ft_sensor in no-ft-sensor schunk-ft; do
            args=(base_type:="$base_type" arm_model:="tiago-arm" "ft_sensor:=$ft_sensor" end_effector:="$end_effector")
            if [ "$ft_sensor" != "no-ft-sensor" ]; then
                generate_srdf "${prefix}_${end_effector_value}_${ft_sensor}" "${prefix}_no-ee_${ft_sensor}:${end_effector_value}_${ft_sensor}" "${args[@]}"
            else
                generate_srdf "${prefix}_${end_effector_value}" "${prefix}_no-ee:${end_effector_value}" "${args[@]}"
            fi
        done
    done
done
