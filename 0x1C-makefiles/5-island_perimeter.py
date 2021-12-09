#!/usr/bin/python3

"""A module to calculate perimeter of an island"""


def island_perimeter(grid):
    """The function itself"""

    count = 0
    for ver, row in enumerate(grid):
        for hor, cell in enumerate(row):
            if cell == 1:
                if ver == 0 or grid[ver - 1][hor] == 0:
                    count += 1
                if ver == len(grid) - 1 or grid[ver + 1][hor] == 0:
                    count += 1
                if hor == 0 or grid[ver][hor - 1] == 0:
                    count += 1
                if hor == len(row) - 1 or grid[ver][hor + 1] == 0:
                    count += 1
            else:
                pass
    return count
