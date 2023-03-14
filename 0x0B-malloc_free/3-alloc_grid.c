#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *@width: width of the grid
 *@height: height of the grid
 *Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
int **ar;
int i, j;
if (height <= 0 || width <= 0)
return (NULL);
array = (int **) malloc(sizeof(int *) * height);
if (ar == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
ar[i] = (int *) malloc(sizeof(int *) * width);
if (ar[i] == NULL)
{
free(ar);
for (j = 0; j <= i; j++)
free(ar[j]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
ar[i][j] = 0;
}
}
return (ar);
}
