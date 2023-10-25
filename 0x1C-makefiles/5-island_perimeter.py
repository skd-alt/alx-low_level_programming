#!/usr/bin/python3
"""Calculates the perimeter of an Island"""


def island_perimeter(grid):
    """Function to calculate perimeter
        grid : Nested list represnting the island
    """

    num_rows = len(grid)

    if grid != []:
        num_cols = len(grid[0])
    
    perimeter = 0

    for i in range(num_rows):
        for j in range(num_cols):
            if grid[i][j] == 1:
                count_ones = check_ones(i, j, grid)
                if count_ones < 3:
                    perimeter += 3
                else:
                    perimeter += 2

    return perimeter

                    
def check_lower(a):
    if a > 0:
        return a - 1
    elif a == 0:
        return a

def check_upper(a, grid):
    if a < len(grid) - 1:
        return a + 2
    else:
        return a + 1

def check_ones(a, b, grid):
    """Check to add 2 or 3"""

    count = 0
    sa = check_lower(a)
    ea = check_upper(a, grid)
    sb = check_lower(b)
    eb = check_upper(b, grid[0])
    for i in range(sa, ea):
        for j in range(sb, eb):
            if grid[i][j] == 1 and count < 3:
                count += 1

    return count
