#include "main.h"

/**
 * get_endianness - a function that checks if a machine is little or big endian
 * Return: 0 big or 1 little
 */

int get_endianness(void)
{
unsigned int p = 1;
char *t = (char *) &p;
return (*t);
}

