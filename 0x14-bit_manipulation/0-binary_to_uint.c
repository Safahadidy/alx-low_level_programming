#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to binary num
 * Return: 0 or ui
 */
unsigned int binary_to_uint(const char *b)
{
int i, len = 0;
unsigned int sum = 0;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
return (0);
len++;
}
for (i = 0; i < len; i++)
{
sum += (b[i] - '0') * _pow(2, len - i - 1);
}
return (sum);
}
/**
 * _pow - calculate power
 * @x: base
 * @y: power
 * Return: result
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
unsigned int i;
unsigned int result = 1;
for (i = 0; i < y; i++)
{
result *= x;
}
return (result);
}
