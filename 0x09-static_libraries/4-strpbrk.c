#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;
char *p;
i = 0;
while (s[i] != '\n') 
{
j = 0;
while (accept[j] != '\n')
{
if (s[i] == accept[j])
{
p = &s[i];
return (p);
}
j++;
}
i++;
}
return ('\0');
}
