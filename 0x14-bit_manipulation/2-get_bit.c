#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: number
 * @index: index
 *
 * Return: value
 */

int get_bit(unsigned long int n, unsigned int index)
{
int i;

if (index > 63)
return (-1);
i = (n >> index) & 1;
return (i);
}
