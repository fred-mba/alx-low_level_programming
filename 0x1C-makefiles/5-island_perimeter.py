#!/usr/bin/python3
"""Calculates the perimeter of the island described in grid"""


def island_perimeter(grid):
    """
    grid (lists of int): Represents the island where 0 is water and 1 is land.

    Returns: (int) perimeter of the island
    """
    perimeter = 0

    for height in range(len(grid)):
        for width in range(len(grid[0])):
            if grid[height][width] == 1:
                perimeter += 4  # Assuming land contributes 4

                if width > 0 and grid[height][width - 1] == 1:
                    perimeter -= 2

                if height > 0 and grid[height - 1][width] == 1:
                    perimeter -= 2

    return perimeter
