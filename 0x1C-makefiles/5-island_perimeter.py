#!/usr/bin/python3
"""
function for calculating the perimeter of an irregular shape(island)
"""


def island_perimeter(grid):
    """
    ïnt 0 represents water zone
    int 1 represents land zone
    grid[list[int]]
    The rows and columns must be equal
    The rows and columns cannot exceed 100 in mearsurement
    """
    """checking if the grid is empty
    """
    if not grid or not grid[0]:
        return 0
    rows = len(grid)
    columns = len(grid[0])
    # checking if the rows and column are equal and do not exceed 100
    for row in grid:
        if len(row) != columns:
            print("Rows and column length are not equal")
        if columns > 100 or rows > 100:
            print("The minimum height or width is exceeded")
    # initializing th value of perimeter
    perimeter = 0
    for i in range(rows):
        # iterating through the matrix to calculate perimeter
        for j in range(columns):
            if grid[i][j] == 1:
                perimeter += 4
            # checking if the cells share a border and subtracting their value
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
