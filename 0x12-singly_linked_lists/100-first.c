#include <stdio.h>
#include "lists.h"

/**
 * print_bef - prints a sentence before the main function is executed.
 *
 * Return: Always 0.
 */

void __attribute__ ((constructor)) print_bef()

{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back!\n");
}
