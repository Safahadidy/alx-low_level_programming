#include <stdlib.h>
#include "main.h"
/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
a = malloc(sizeof(char) * size);
if ((size == 0) || (a == NULL))
return (NULL);
for (i = 0; i < size; i++)
a[i] = c;
return (a);
}
