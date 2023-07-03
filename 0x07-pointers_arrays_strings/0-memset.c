#include "main.h"
/**
 * _memset: a function that fills memory with a specific value
 * @s: address of memory to be filled
 * @b: the value that fills
 * @n: number of bytes to be changed
 *
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

