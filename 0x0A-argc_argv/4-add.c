#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers,
 *        followed by a new line.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
int sum = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (int i = 1; i < argc; i++)
{
for (int digit = 0; argv[i][digit]; digit++)
{
	if (argv[i][digit] < '0' || argv[i][digit] > '9')
	{
		printf("Error\n");
		return (1);
	}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
