#include "main.h"
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * primeno - calculates if a number is prime recursively
 * @num: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int primeno(int num, int i)
{
if (i == 1)
{
return 1;
}
else
{
if (num % i == 0)
{
return 0;
}
else
{
return primeno(num, i - 1);
} 
}
}
