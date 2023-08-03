#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to string
 * Return: converted number or (0) if b is NULL or not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
int p;
unsigned int count = 0;

if (b == NULL)
return (0);
for (p = 0; b[p]; p++)
{
if (b[p] < '0' || b[p] > '1')
return (0);
count = 2 * count + (b[p] - '0');
}
return (count);
}
