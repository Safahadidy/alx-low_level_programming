#include "main.h"
/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @i: The number to find the square root of.
 * @root: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int i, int root)
{
if ((root * root) == i)
return (root);
if (root == i / 2)
return (-1);
return (find_sqrt(i, root + 1));
}
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 */
int _sqrt_recursion(int n)
{
int root = 0;
if (n < 0)
return (-1);
if (n == 1)
return (1);
return (find_sqrt(n, root));
}
