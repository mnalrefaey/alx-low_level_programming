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
int n = 0;
char ch = 'a';
while (n <= 9)
{
putchar (n + 48);
n++;
}
while (ch <= 'f')
{
putchar (ch);
ch++;
}
putchar('\n');
return (0);
}
