#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - prints a text accroding number
 *
 * Description: print the value of n status: greater than, is zero, less than 6.
 *
 * Return: Always succes */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
if (digit > 5)
	printf("Last digit of %i is %i and is less greater than 5\n", n, digit);
else if (digit == 0)
	printf("Last digit of %i is %i and is 0\n", n, digit");
else if (digit < 6 && digit != 0)
	printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	return (0);
}
