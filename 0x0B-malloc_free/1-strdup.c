#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *dub;
unsigned int i, size = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
size++;
dub = malloc(sizeof(char) * (size + 1));
if (dub == NULL)
return (NULL);
for (i = 0; i < size; i++)
dub[i] = str[i];
dub[size] = '\0';
return (dub);
}
