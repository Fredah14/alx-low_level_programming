#include "main.h"
#include <stdio.h>
/**
*print_array - Prints n elements of an array of integers
*@a: array to be printed
*@n: the number of elements of the array to be printed
*Return: a and n inputs
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
			printf("\n");
}
