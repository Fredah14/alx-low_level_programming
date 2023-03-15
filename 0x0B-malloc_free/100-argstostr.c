#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - Concatenates all the arguments of the program.
 *@ac: Number of arguments
 *@av: Array of arguments
 *Return: A pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
int i, j, k, len;
char *str;
		
if (ac == 0 || av == NULL)
return (NULL);
		
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
}
len += ac;
str = malloc(sizeof(char) * (len + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < ac; i++)		
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
if (str[k] == '\0')
{
str[k++] = '\n';
}
}
return (str);
}
