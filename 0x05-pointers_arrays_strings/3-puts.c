#include "main.h"

/**
 *_puts - a function that prints a string
 *
 *@str:index of string
 *
 *Return: always 0 (success)
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
