#include "main.h"
#include <string.h>

/**
 *_strlen - a function that returns the length of a string
 *
 *@s:index of string
 *Return: the length of a string.
 */
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
s++;
len++;
}
return (len);
}
