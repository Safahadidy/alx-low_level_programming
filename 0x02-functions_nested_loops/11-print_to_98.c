#include <stdio.h>
#include "main.h"


/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line
* @n: print from this number
*/
void print_times_table(int n)
{
    int i, j, prod;
    if ((n>=0)&&(n<=15))
    {
        for(i=0;i<=n;i++)
        {
            for(j=0; j<=n;j++)
            {
                prod=i*j;
                if((prod>=0)&&(prod<10))
                _putchar(prod + '0');
                else if ((prod>=10)&&(prod<100))
                {
                    _putchar(prod/10 + '0');
                    _putchar(prod%10 + '0');
                }    
                else
                {
                    _putchar(prod/100 + '0');
                    _putchar((prod/10)%10 + '0');
                    _putchar(prod%10 + '0');
                }
            
                 _putchar(',');
                  _putchar(' ');
            }
             _putchar('\n');
        }
        
    }
    
}
