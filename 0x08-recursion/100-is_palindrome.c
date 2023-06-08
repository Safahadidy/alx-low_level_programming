#include "main.h"


/**
* length - return string length
* @s: string pointer
* Return: String Length
*/
int length(char *s)
{
if (*s == '\0')
	return (0);
return (length(s + 1) + 1);
}
/**
 * p - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int p(char *s, int i, int len)
{
if (i >= len)
return (1);
else if (s[i] == s[len - 1 - i])
return (p(s, i + 1, len));
return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
int i = 0, len = length(s);
return (p(s, i, len));
}
