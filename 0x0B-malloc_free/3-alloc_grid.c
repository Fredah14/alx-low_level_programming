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
int **array;
int i, j;
if (height <= 0 || width <= 0)
return (NULL);
array = malloc(sizeof(int *) * height);
if (array == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
array[i] = malloc(sizeof(int) * width);
if (array[i] == NULL)
{
for (j = 0; j <= i; j++)
free(array[j]);
free(array);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
array[i][j] = 0;
}
}
return (array);
}
