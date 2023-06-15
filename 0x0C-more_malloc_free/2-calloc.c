#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: no. of array elements
 * @size:no. of bytes for each array element
 *
 * Return:returns a pointer to the allocated memory.
 * NULL If nmemb or size is 0
 * NULL If malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *s;
if ((nmemb == 0) || (size == 0))
return (NULL);
s = calloc(nmemb, size);
if (s == NULL)
return (NULL);
	return (s);
}
