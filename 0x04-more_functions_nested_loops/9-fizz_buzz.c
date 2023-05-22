#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints FizzBuzz
 * Return: void
 */

int main(void)
{
    int i;
    for(i=1; i<=100 ; i++)
    {  
        
        if (i%3==0)
        
           printf("puzz");
        else if (i%5==0)
           printf("fuzz");
        else
            printf("%d", i);
       printf(" ");
    }
    return 0;
}


