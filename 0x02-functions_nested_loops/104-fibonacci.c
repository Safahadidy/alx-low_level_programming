#include <stdio.h>


/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */


int main(void)
{
	
    int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half1, half2;

	for (count = 0; count <= 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}
    fib1_half1 = fib1 / 10000000000;
	fib2_half1 = fib2 / 10000000000;
	fib1_half2 = fib1 % 10000000000;
	fib2_half2 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fib1_half1 + fib2_half1;
		half2 = fib1_half2 + fib2_half2;
		

		printf(", %lu%lu",  half1, half2);
		
		fib1_half1 = fib2_half1;
		fib1_half2 = fib2_half2;
		fib2_half1 = half1;
		fib2_half2 = half2;
	}
	printf("\n");
	return (0);
}
bef2 = (bef % l);
aft1 = (aft / l);
aft2 = (aft % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", aft1 + (aft2 / l));
printf("%lu", aft2 % l);
aft1 = aft1 + bef1;
bef1 = aft1 - bef1;
aft2 = aft2 + bef2;
bef2 = aft2 - bef2;
}
printf("\n");
return (0);
}
