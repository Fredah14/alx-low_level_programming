#include <stdio.h>
/**
*main - Prints the alphabet in lowercase, except q and e
*
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
