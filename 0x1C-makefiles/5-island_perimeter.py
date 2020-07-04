#!/usr/bin/python3
"""function that calc the perimeter of a bite island"""

def island_perimeter(grid):

    P = 0
    a = len(grid)
    b = len(grid[0])

    if a == b or a * b > 100:
        return "Grid is rectangular, width and height don’t exceed 100"


    else:
        for i in range(a):
            for j in range(b):
                if grid[i][j] == 1:
                    print(P)
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
