#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Concatenates two strings.
 *@s1: First str
 *@s2: Second str
 *Return: Pointer to the new str or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
  char *s3;
  unsigned int = 0, j = 0, len1 = 0, len2 = 0;
