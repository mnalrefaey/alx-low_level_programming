#include "main.h"

/**
 *print_most_numbers - a function that prints the numbers
 *from 0 - 9 except 2,4
 *
 *Return: always 0 (success)
 */
void print_most_numbers(void)
{
char c;
for (c = '0' ; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
_putchar (c);
}
}
_putchar('\n');
}
