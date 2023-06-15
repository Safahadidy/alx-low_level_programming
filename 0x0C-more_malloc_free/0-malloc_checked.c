#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: array size
 * Return: array refrance or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *s;
	s = malloc(b);
	if (s == Null)
		exit (98);
	return (s);
}
