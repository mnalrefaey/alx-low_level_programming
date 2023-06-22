#include <main.h>

/**
 *_isdigit - check if input is a digit 0 through 9
 *
 *@c:input for a digit
 *
 * Return: 1 if c is a digit
 * otherwise returns 0.
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
return (1);
else
return (0);
}
