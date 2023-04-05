#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string to be measured.
 * Return: the length of a string.
 */
int _strlen_recursion(char *s);
{
int len = 0;
if (*s == '\0')
return (len);
else
len ++i;
len +=  _strlen_recursion(s + 1);
return (len);
}
