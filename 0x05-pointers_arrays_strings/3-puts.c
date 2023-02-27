#include "main.h"

/**
*_puts - Prints a string, followed by a new line, to stdout.
*@str: the str
*Return: Always 0.
*/

void _puts(char *str)
{
int a = 0;
while (str[a] != '\o')
{
_putchar(str[a];
a++;
}
_putchar('\n');
}
