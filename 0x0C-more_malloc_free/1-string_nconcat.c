#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: size of s2
 * Return: array refrance concatenates two strings.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, len1 = 0, len2 = 0;
char *s;
if ((s1 == NULL) && (s2 == NULL))
{
s = malloc(1);
if (s == NULL)
return (NULL);
s[0] = '\0';
return (s);
}
while (s1[len1])
len1++;
while (s2[len2])
len2++;
if (n >= len2)
n = len2;
s = malloc(len1 + n + 1);
if (s == NULL)
return (NULL);
for (i = 0; i <= (n + len1); i++)
s[i] = s1[i];
for (i = 0; i <= n; i++)
s[len1 + i] = s2[i];
s[len1 + n] = '\0';
return (s);
}

