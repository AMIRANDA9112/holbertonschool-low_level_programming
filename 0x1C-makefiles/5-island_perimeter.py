#!/usr/bin/python3
"""Function that calc the perimeter of a island in a Bits Maps"""


def island_perimeter(grid):
    """

    :param grid: Bits Map multidimensional array
    :return: perimeter
    """

    P = 0
    a = len(grid)
    b = len(grid[0])

    if a == b or a * b > 100:
        return "Grid is rectangular, width and height don’t exceed 100"

    if a == 0 or b == 0:
        return 0

    else:
        for i in range(a):
            for j in range(b):
                if grid[i][j] == 1:
                    P += 4
                    if grid[i + 1][j] == 1:
                        P -= 1
                    if grid[i - 1][j] == 1:
                        P -= 1
                    if grid[i][j + 1] == 1:
                        P -= 1
                    if grid[i][j - 1] == 1:
                        P -= 1

                    else:
                        pass

                else:
                    pass
            else:
                pass

        return P
