#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all -  prints anything
 * @format: list of types
 * Return: void or (nil)
 */
void print_all(const char * const format, ...)
{
int x = 0;
char *str;
char separated[] = {", "};
va_list args;
va_start(args, format);
while ((format != NULL) && (format[x] != '\0'))
switch (format[x])
{
case 'c':
printf("%c%s", va_arg(args, int), sep);
break;
case 'i':
printf("%d%s", va_arg(args, int), sep);
break;
case 'f':
printf("%f%s", va_arg(args, double), sep);
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)%s", sep);
break;
}
printf("%s%s", str, sep);
break;
}
x++;
}
printf("\n");
va_end(args);
}
