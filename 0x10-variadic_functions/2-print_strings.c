#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - a function that prints strings followed by a new line
 *
 *@n: number of passed strings
 *
 *@separator: string to be printed between numbers
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list count;
char *str;
unsigned int x;
va_start(count, n);
for (x = 0; x < n; x++)
{
str = va_arg(count, char*);
if (str == NULL)
printf("nil");
else
printf("%s", str);
if (x != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(count);
}
