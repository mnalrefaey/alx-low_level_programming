#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int p;
int r = 0;
unsigned long int tmp;
unsigned long int ex = n ^ m;
for (p = 63; p >= 0; p--)
{
tmp = ex >> p;
if (tmp & 1)
r++;
}
return (r);
}

