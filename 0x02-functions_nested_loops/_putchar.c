#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar – writes the character c to stdout @c: The character to print
 *
 * Return: on success 1.
 *             on error, -1 is returned and errno is set
 */
int _putchar(char c)
{
return (write(1, $c, 1));
}
