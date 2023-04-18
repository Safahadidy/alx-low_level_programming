
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int len = n, i;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

for (i = 0; s1[i]; i++)
len++;

s = malloc(sizeof(char) * (len + 1));

if (s == NULL)
return (NULL);

len = 0;

for (i = 0; s1[i]; i++)
s[len++] = s1[i];

for (i = 0; s2[i] && i < n; i++)
s[len++] = s2[i];

s[len] = '\0';

return (s);
}