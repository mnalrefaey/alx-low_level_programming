#include"main.h"

/**
 * _abs - function that computes the absolute value of an intege
 *
 * @n: takes an integer for function
 *
 * Return: returns always(0) success
*/
int _abs(int n)
{
if (n < 0)
n = n * (-1);
return (n);
}
