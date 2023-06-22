#include <main.h>
#include <stdio.h>

/**
 *_isupper - check if c is upper
 *
 *@c:input alphabet
 *
 *Return: 1 if it is upperscase
 * otherwise returns 1.
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
