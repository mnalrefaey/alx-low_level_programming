#include "main.h"

/**
 * main - Entry point
 *
 * Description:prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0 (success)
*/

void print_alphabet(void);
{
for (char i = 'a' ; i <= 'z' ; i++)
putchar(i);
putchar('\n');
return (0);
}
