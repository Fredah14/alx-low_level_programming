#include <stdio.h>
#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
int little_endian = 1;
char *big_endian  = (char *)&little_endian;
if (*big_endian == 1)
return (1);
return (0);
}
