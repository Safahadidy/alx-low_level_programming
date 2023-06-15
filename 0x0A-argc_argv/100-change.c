#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int i, count = 0, cell, number;
int cells[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
if (number < 0)
printf("%d\n", 0);
else
{
for (i = 0; i < 5; i++)
{
if (number >= cells[i])
{
cell = (number / cells[i]);
count = count + cell;
number = number - cell *cells[i];
}
}
printf("%d\n", count);
}
return (0);
}
