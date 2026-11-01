#!/usr/bin/env python3
"""Success rate with Wilson 95% intervals, one panel per injected fault. usage: figure_rq2.py <results dir> <output stem>"""
import json
import sys

import matplotlib

matplotlib.use('Agg')
import matplotlib.pyplot as plt  # noqa: E402

ROWS = [
    ('no_recovery', 'No recovery'),
    ('api', 'API script'),
    ('flat_retry', 'Flat retry x3'),
    ('flat_retry9', 'Flat retry x9'),
    ('hierarchical', 'Hierarchical'),
    ('hierarchical_clear', 'Hierarchical,\nview clear'),
]
PANELS = [('planning', 'Planning'), ('grasp', 'Grasp'), ('nav', 'Navigation')]
INK, MUTED, GRID, BLUE = '#0b0b0b', '#52514e', '#e4e3df', '#2a78d6'

s = json.load(open(f'{sys.argv[1]}/summary.json'))
plt.rcParams.update(
    {
        'font.family': 'serif',
        'font.size': 7,
        'pdf.fonttype': 42,
        'axes.edgecolor': MUTED,
        'axes.linewidth': 0.5,
    }
)
fig, axes = plt.subplots(1, 3, figsize=(3.45, 1.75), sharey=True, sharex=True)
for ax, (fault, title) in zip(axes, PANELS):
    for y, (variant, _) in enumerate(ROWS):
        r = s.get(f'{fault}/{variant}')
        if not r:
            ax.text(50, y, 'not run', ha='center', va='center', color=MUTED, fontsize=6)
            continue
        ours = variant.startswith('hierarchical')
        color = BLUE if ours else MUTED
        ax.plot(
            [100 * r['ci'][0], 100 * r['ci'][1]],
            [y, y],
            color=color,
            lw=1.2,
            solid_capstyle='round',
            zorder=2,
        )
        # The hollow marker is the tree changed after seeing the first results
        ax.plot(
            100 * r['rate'],
            y,
            'o',
            ms=4,
            mfc='white' if variant == 'hierarchical_clear' else color,
            mec=color,
            mew=1,
            zorder=3,
            clip_on=False,
        )
    ax.set_title(title, fontsize=7, color=INK, pad=3)
    ax.set_xlim(-6, 106)
    ax.set_xticks([0, 50, 100])
    ax.grid(axis='x', color=GRID, lw=0.5)
    ax.set_axisbelow(True)
    ax.tick_params(length=0, colors=MUTED, labelsize=5.5)
    for side in ('top', 'right', 'left'):
        ax.spines[side].set_visible(False)
axes[0].set_yticks(range(len(ROWS)))
axes[0].set_yticklabels([name for _, name in ROWS], color=INK, fontsize=6.5)
axes[0].set_ylim(-0.6, len(ROWS) - 0.4)
axes[1].set_xlabel(
    'Missions where the box was lifted (%)', fontsize=6.5, color=MUTED, labelpad=2
)
fig.subplots_adjust(left=0.235, right=0.985, top=0.91, bottom=0.17, wspace=0.1)
fig.savefig(f'{sys.argv[2]}.pdf')
fig.savefig(f'{sys.argv[2]}.png', dpi=300)
