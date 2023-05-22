#include "main.h"

/**
 * print_diagonal - entry point
 * Description: Prints diagonals
 * @n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	
    int i, count;
	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
		 for (i = 0; i <= count; i++)
		{
			_putchar(' ');
			
			
		} 
		_putchar(92);
			_putchar('\n'); 
		}
		
		
	}
    else 
    {
       
			_putchar('\n'); 
    }
	

