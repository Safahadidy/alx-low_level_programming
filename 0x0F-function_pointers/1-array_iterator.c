#include "function_pointers.h"
#include <stddef.h>
/**
* array_iterator - this function execute function on given array
* @array: array pointer
* @size: size
* @action: function
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if ((array == NULL) || (size == 0) || (action == NULL))
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
