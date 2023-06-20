#include"main.h"

/**
 * print_last_digit - function that prints the last digit
 *
 * @n: takes an integer for function
 *
 * Return: returns always(0) success
*/

int print_last_digit(int n)
{
int digit;
if (n > 0)
{
digit = (n % 10);
_putchar (digit + '0');
_putchar ('\n');
return (digit);
}
else if (n == 0)
{
digit = 0 % 10;
_putchar (digit + '0');
_putchar ('\n');
return (digit);
}
else
{
digit = n % 10 * (-1);
_putchar (digit + '0');
_putchar ('\n');
return (digit);
}
}
