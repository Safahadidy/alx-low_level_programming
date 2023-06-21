#include "function_pointers.h"
#include <stdlib.h>
/**
* print_name - function that take name\
  and function and pass the name to function
* @name:  print
* @f: function to print
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if ((f == NULL) && (name == NULL))
		return;
	(*f)(name);
}
