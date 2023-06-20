#include"main.h"

/**
 * print_sign - function to print the sign of a number
 *
 * @n: checks input of function
 *
 * Return: returns 1 if 'n' is greater than zero
 * returns 0 if 'n' is zero
 * returns -1 if 'n' is less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('43');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('48');
	}
	else
	{
		return (-1);
		_putchar('45');
	}
