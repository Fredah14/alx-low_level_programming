#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: a pointer to the first number of bit
 * @m: a pointer to the second number of bit to flip n to
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int current = n ^ m;
unsigned long int bit = 0;
while (current > 0)
{
bit += (current & 1);
current >>= 1;
}
return (bit);
}
