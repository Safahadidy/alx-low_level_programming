#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(const char *str)
{
	int length = 0;

while (*str != '\0')
{
length++;
*str ++;
}
return (length);
}
