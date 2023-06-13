#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: If concatenation fails - NULL.
 *         Otherwise - a pointer the newly-allocated space in memory
 *                     containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int i, len_s1 = 0, len_s2 = 0, len = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len_s1])
len_s1++;
while (s2[len_s2])
len_s2++;
s = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < len_s1; i++)
s[len++] = s1[i];
for (i = 0; i <= len_s2; i++)
s[len++] = s2[i];
return (s);
}
