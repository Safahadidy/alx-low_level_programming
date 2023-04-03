#include "main.h"
/**
 * memset - fills the first size bytes of the memory area
 *          pointed to by @s with the constant byte @b
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @size: The number of bytes to be filled.
 *
 * Return: pointer of s
 */
char *_memset(void *s, int b, unsigned int size)
{
	unsigned int index;
	unsigned char *memory = s, value = b;

	for (index = 0; index < size; index++)
		memory[index] = value;

	return (memory);
}
