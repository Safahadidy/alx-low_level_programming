#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - search in array using function
* @array: array
* @size: size of array
* @cmp: function to serch
* Return: index of element , 0 not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0)
	return (-1);
if ((array != NULL) && (cmp != NULL))
{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
}
return (-1);
}
