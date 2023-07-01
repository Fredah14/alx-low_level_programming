#include <stdio.h>
#include "lists.h"

/**
 * print_bef - prints a sentence before the main function is executed.
 * function is executed
 * Return: Always 0.
 */

void print_bef(void) __attribute__ ((constructor));
void print_bef()
{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back!\n");
}
