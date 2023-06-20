#include"main.h"

/**
 * _islower - checks the code if character is lowercase
 *
 * @c: checks input of function
 * lowercase - Write a function that checks for lowercase character
 *
 * Return: returns 1 if charater 'c' is lowercase, returns 0 if not,
 * return 0 (success)
*/
int _islower(int c)
{
int c;
if (c >= 97 && c <= 122)
return (1);
return (0);
}

