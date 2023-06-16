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

char CH = 'A';
while (CH <= 'Z')
{
putchar(CH);
CH++;
}
putchar('\n');

return (0);
}
