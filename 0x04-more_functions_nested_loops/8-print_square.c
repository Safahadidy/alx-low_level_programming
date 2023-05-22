#include "main.h"

/**
 * print_square - entry point
 * Description: Prints square
 * @size: size of square
 * Return: void
 */

void print_square(int size)
{
	
    int i, count;
	if (size > 0)
	{
		for (count = 0; count < size; count++)
		{
		 for (i = 0; i < size; i++)
		{
			_putchar('#');
			
			
		} 
		
			_putchar('\n'); 
		}
		
		
	}
    else 
    {
       
			_putchar('\n'); 
    }
	
}
