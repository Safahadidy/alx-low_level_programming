#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
int i, j;
	int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[i] = s[i]-32;
			}
			else
			{
				for (j = 0; j < 13; j++)
				{
					if (a[j] == s[i-1])
					
						s[i] = *(s + i) - 32;
					
				}
			}
		}
	i++;
	}
	return (s);
index == 0)
str[index] -= 32;

index++;
}

return (str);
}
