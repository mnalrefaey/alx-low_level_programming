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
int digit = 0;
while (digit <= 9)
{
putchar(digit + 48);
digit++;
}
putchar('\n');
return (0);
}
