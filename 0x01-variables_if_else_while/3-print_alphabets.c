#include <stdio.h>
/**main - Prints the alphabet in lowercase, and then in uppercase
*
*Return: 0
*/
int main(void)
{
  char alp[26] = "abcdefghijklmnopqrstuvwxyz" "ABCDEFGHIJKLMOPQRSTUVWXYZ";
int i;
for (i =0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
