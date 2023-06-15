#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: start
 * @max: end
 * Return: from min to max array refrance or NULL
 */
int *array_range(int min, int max)
{
int *s, i, size;
if (min > max)
return (NULL);
size = (max - min  + 1);
s = malloc(size *sizeof(int));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = min + i;
}
return (s);
}
