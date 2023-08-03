#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
int p;
int coun = 0;
unsigned long int tmp;

for (p = 63; p >= 0; p--)
{
tmp = n >> p;
if (tmp & 1)
{
_putchar('1');
coun++;
}
else if (coun)
_putchar('0');
}
if (!coun)
_putchar('0');
}
