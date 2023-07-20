#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - a function that prints numbers followed by a new line
 *
 *@n: number of parameters
 *
 *@separator: string to be printed between numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int x;
va_list count;
va_start(count, n);
for (x = 0; x < n; x++)
{
printf("%d", va_arg(count, int));
if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(count);
}
