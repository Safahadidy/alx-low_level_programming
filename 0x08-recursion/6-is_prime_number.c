#include "main.h"
/**
 * is_divisible - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 * Return: 1 if n is a div number, 0 if not
 */
int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);
if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
/**
 *is_prime_number - says if an integer is a prime number or not
 *@n: number to evaluate
 *Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
int div = 2;
if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
return (is_divisible(n, div));
}

