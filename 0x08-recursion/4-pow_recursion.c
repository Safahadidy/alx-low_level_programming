#include "main.h"
/**
* Description: _pow_recursion - Return String Length
* @x: int
* @y: int
* Return: Integer
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 0)
return (1);
else
return (_pow_recursion(x, y - 1) * x);
}
