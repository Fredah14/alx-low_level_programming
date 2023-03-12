#include <stdio.h>
#include "main.h"

/**
 *main - Prints the number of arguments passed into it.
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: Always 0.
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc);
return (0)
}
