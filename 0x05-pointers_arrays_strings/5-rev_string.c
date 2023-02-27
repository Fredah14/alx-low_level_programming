#include "main.h"

/**
*rev_string - reverses a string.
*@s: string to be reversed
*Return: Always 0.
*/

void rev_string(char *s)
{
int a = 0, b = 0;
char x;
while (s[b++])
a++;
for (b = a - 1; b >= a/ 2; b--)
{
x = s[b];
s[b] = s[a - b - 1];
s[a - b - 1] = x;
}
}
