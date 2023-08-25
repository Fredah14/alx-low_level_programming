#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a func given as parameter on each element of array
 * @array: array
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < size; i++)
{
action(array[i]);
}
}
