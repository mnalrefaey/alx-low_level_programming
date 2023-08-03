#include "main.h"

/**
 * clear_bit - a function thatsets the value of a given bit to 0
 * @n: pointer
 * @index: index
 *
 * Return: 1 success or -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
