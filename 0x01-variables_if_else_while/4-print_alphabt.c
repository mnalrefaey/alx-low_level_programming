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
    if (ch == 'e' || ch == 'q')
    ch++;
putchar(ch);
ch++;
}

putchar('\n');

return (0);
}
