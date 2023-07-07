#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit value to be returned
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
int value_bit;
if (index > 5)
return (-1);
if ((n & (1 << index)) == 0)
return (0);
value_bit = (n >> index) & 1;
return (value_bit);
}
