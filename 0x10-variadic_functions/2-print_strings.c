#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings
 * @separator: string to be printed between
 * @n: number
 * Return: void or (nil)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list argc;
char *x;
int i;
va_start(argc, n);
for (i = 0; i < n; i++)
{
x = va_arg(argc, char*);
if (x != NULL)
printf("%s", x);
else
printf("nill");
if ((i != n - 1) && (separator))
printf("%s", separator);
}
printf("\n");
va_end(argc);
}
