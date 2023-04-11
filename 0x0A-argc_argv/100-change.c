#include <stdio.h>
#include <stdlib.h>
/* 
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return 0(success)
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int i, money = atoi(argv[1]), coins;
int cents[] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
{
if (money >= cents[i])
{
coins += money / cents[];
}
}
printf("%d\n", coins);
}
return (0);
}
