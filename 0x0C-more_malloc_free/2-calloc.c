#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_callo - Allocates memory for an array, using malloc.
 *@nmemb: number of elements in the array
		
 * @size: size of each element
		
 *
		
 * Return: pointer to allocated memory
		
 */
		
void *_calloc(unsigned int nmemb, unsigned int size)
		
{
char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
_memset(ptr, 0, nmemb * size);
return (ptr);
}
