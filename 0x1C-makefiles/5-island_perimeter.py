#!/usr/bin/python3
"""
defines the island_perimeter function
"""


def island_perimeter(grid):
    """
    Determines the perimeter of an island
    described in grid.

    Args:
        grid (List[List[int]]): describes the island

    Returns:
        the perimeter of the island
    """
    per = 0
    for r in range(0, len(grid)):
        for c in range(0, len(grid[0])):
            if grid[r][c] == 0:
                continue
            if (r - 1 < 0 or grid[r - 1][c] == 0):
                per += 1
            if (r + 1 >= len(grid) or grid[r + 1][c] == 0):
                per += 1
            if (c - 1 < 0 or grid[r][c - 1] == 0):
                per += 1
            if (c + 1 >= len(grid[0]) or grid[r][c + 1] == 0):
                per += 1

    return per
