#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to binary num
 * Return: 0 or ui
 */
unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int sum = 0, len = 0;
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
sum += (b[i] - '0') * pow(2, len - i - 1);
}
return (sum);
}

