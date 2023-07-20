#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of parameters
 *
 *@n: number of parameters
 *
 * Return: If n ==  0 Return (0).
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int x;
int sum = 0;
va_list count;
if (n == 0)
return (0);
va_start(count, n);
for (x = 0; x < n; x++)
sum += va_arg(count, int);
va_end(count);
return (sum);
}
