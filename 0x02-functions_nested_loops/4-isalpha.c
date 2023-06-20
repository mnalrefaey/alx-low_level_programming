#include"main.h"

/**
 * _isalpha - function to check if character is a letter
 * lowercase or uppercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is a letter
 * otherwise always 0 (success)
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
else if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
