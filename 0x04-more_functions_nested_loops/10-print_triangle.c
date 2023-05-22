#include "main.h"

/*
 * print_triangle - entry point
 * Description: Prints diagonals
 * @size: size of th
 * Return: void
 */

void print_triangle(int size)
{
  int count, i , j;
  if (size > 0) 
  {
  for (count = 1; count <= size; count ++)
  {
      for (i = 1 ; i <= size ; i++ )
        {
            if (i  >=(size-(count-1)))
            { 
               
               _putchar('#');
               
            }
            else 
             _putchar(' ');
            
        }
       _putchar('\n'); 
  }
      
  }
 
}    
		}
	}
}
