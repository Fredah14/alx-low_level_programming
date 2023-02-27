#include "main.h"

/**
*swap_int - Swaps the values of two int
*@a: first int
*@b: second int
*Return: Always 0.
*/

void swap_int(int *a, int *b)
{
int s;
s = *a;
*a = *b;
*b = s;
}
