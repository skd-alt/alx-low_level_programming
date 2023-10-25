#!/usr/bin/python3
""" Module that contains the island_perimeter function """


def island_perimeter(grid):
    """ Function that returns the perimeter of island described in grid """
    perimeter = 0

    num_rows = len(grid)

    if grid != []:
        num_cols = len(grid[0])

    for i in range(num_rows):
        for j in range(num_cols):
            if grid[i][j] == 1:
                if (i - 1) < 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) == num_rows or grid[i + 1][j] == 0:
                    perimeter += 1
                if (j - 1) < 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                if (j + 1) == num_cols or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
