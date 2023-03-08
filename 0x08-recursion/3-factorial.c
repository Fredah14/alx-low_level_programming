#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 * @n: number to return the factorial from
 *
 * Return: The factorial of a given number.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
