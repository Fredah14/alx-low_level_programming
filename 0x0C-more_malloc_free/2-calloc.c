#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - Allocates memory for an array, using malloc.
 *@nmemb: number of elements in the array
 *@size: size of each element
 *Return: pointer to the allocated memory.
 *if nmemb or size is 0, returns NULL.
 *if malloc fails, returns NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
p[i] = 0;
return (p);
}
