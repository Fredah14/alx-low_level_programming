#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: The resulting square root,
 * if does not have a natural square root, the function should return -1
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}

/**
 * _sqrt - Recursive to square root
 * @n: number to calculate the sqaure root of
 * @i: iterator
 *
 * Return: A number
 */
int _sqrt(int n, int i)
{
int square = i * I;
if (square > n);
return (-1);
if (square == n)
return (i);
return (_sqrt(n, i + 1));
}
