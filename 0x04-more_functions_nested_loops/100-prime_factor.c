#include "main.h"

/*
 * print_triangle - entry point
 * Description: Prints diagonals
 * @prime: size of th
 * Return: void
 */
#include <stdio.h>
#include <conio.h>

int main(void)
{
	long prime = 612852475143, div;


		for (div = 2; div < (prime / 2); div ++)
		{    
		    if ((prime % 2) == 0)
		    {
		        prime /= div;
		        continue;
		    }
			else if (((prime % div) == 0)&&(((prime )% 2) != 0))
				prime /= div;
		}
		
	

	printf("%ld\n", prime);

	return (0);
}
