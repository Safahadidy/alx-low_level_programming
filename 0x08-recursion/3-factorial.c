#include "main.h"
/**
* Description: factorial - Return String Length
* @n: int
* Return: Integer
*/
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
