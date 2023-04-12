#include "main.h"
#include <stdlib.h>

/**
  * create_array - Creates an array of chars
  * @size: size of array
  * @c: char to assign  
  * Return: pointer to array, NULL if fail
  */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
array = malloc(sizeof(char) * size);
if (size == 0 || array == '\0')
return (NULL);
for (i = 0; i < size; i++)
ptr[i] = c;
return (array);
}