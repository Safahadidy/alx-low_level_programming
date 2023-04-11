#include <stdio.h>
#include <stdlib.h>
/** 
 * main - prints the minimum number of coins 
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return 0(success)
 */
int main(int argc, char *argv[])
{
if (argc == 2)
{
int i, money = atoi(argv[1]), coins = 0;
int cents[] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
{
if (money >= cents[i])
{
coins = money / cents[i];
money = money % cents[i];
if (money % cents[i] == 0)
break;
}
}
}
printf("%d\n", coins);
else 
{
printf("Error\n");
return (1);
}
return (0);
}
