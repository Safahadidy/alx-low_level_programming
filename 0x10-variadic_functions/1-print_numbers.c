#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_string(const char *s);

/**
* print_numbers - print numbers with separtor
* @separator: char pointer to string separtor
* @n: number of integer
* @...: args
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
int i, s = 0;
va_list argc;
va_start(argc, n);
for (i = 0; i < n; i++)
{
s = va_arg(argc, int);
	printf("%d", s);
	if ((i != n - 1) && (separator))
		printf("%s", separator);
	}
	printf("\n");
	va_end(argc);
}
