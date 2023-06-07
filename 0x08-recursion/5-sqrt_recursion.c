#include "main.h"
/**
* Description: _sqrt- calculate the sqare root of string
*              _sqrt_recursion-calculate the sqare root of string
* @n: the number
* @i: counter form [1 , n]
* Return: sqt of n
*/
int _sqrt(int n, int i)
{
if (i * i == n)
return (i);
else if (i * i > n)
return (-1);
else
return (_sqrt(n, i + 1));
}
/**
* Description: _sqrt_recursion-calculate the sqare root of string
* @n: the number
* Return: sqt of n
*/
int _sqrt_recursion(int n)
{
int i = 0;
return (_sqrt(n, i));
}
