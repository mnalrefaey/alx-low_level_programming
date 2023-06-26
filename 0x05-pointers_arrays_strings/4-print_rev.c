#include "main.h"

/**
 *print_rev - a function that prints a string in reverse
 *
 *@s:index of string
 *
 *Return: always 0 (success)
 */
void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
