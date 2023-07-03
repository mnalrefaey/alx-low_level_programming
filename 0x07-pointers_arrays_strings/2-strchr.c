#include "main.h"
/**
 * _strchr - a function that locates a character in a string
 * @s: starting address of memory to be located
 * @c: the desired character
 * Return: changed array with new value for n bytes
 */

char *_strchr(char *s, char c)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (0);
}
