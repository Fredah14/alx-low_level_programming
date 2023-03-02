#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: integer
 * Return: Always 0.
 */

void print_number(int n)
{
	unsigned int n1;

	m = n;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}

	if m / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((m % 10) + '0');
}
