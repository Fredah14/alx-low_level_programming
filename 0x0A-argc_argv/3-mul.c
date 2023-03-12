#include <stdio.h>
#include "main.h"

/**
 *main - Multiplies two numbers.
 *@argc: argc parameter
 *@argv: an array of a command listed
 *Return: 1
 */

int main(int argc, char  *argv[])
{
int result = 0, num1, num2;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 * num2;
printf("%d\n", result);
return (0);
}
