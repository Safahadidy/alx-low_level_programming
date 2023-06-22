#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: the inputs
 * Return: 0 or the result
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, x = 0;
va_list argc;
va_start(argc, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
x += va_arg(argc, int);
printf("%d", x);
}
va_end(argc);
return (x);
}
