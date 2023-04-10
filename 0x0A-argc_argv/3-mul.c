#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that multiplies two numbers
 * @argc: number of arguments
 * @argv: pointer to the arguments
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
int pro;
if (argc == 3)
{
pro = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", pro);
}
else
{
printf("Error\n");
return (1);
}
}
