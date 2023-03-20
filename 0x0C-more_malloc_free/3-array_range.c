#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *array_range - Creates an array of integers.
 *@min: minimum value.
 *@max: maximum value.
 *Return: the pointer to the newly created array
 *If min > max, return NULL
 *If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
nt *ar;
	int i;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * ((max - min) + 1));

	if (ar == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		ar[i] = min;

	return (ar);
}
