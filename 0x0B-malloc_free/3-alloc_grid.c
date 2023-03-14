#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *@grid: the address of the two dimensional grid
 *@width: width of the grid
 *@height: height of the grid
 *Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
      int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}
