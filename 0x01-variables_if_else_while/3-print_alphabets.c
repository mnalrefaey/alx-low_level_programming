#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: 0 (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}

char sh = 'A';
while (sh <= 'Z')
{
putchar(sh);
sh++;
}
putchar('\n');

return (0);
}
