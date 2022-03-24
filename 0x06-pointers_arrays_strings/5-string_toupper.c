#include "main.h"

/**
 * string_toupper - changes lowercase letters to upper
 * @c: character to be capitalized
 * Return: modified string
 */
char *string_toupper(char *c)
{
	int i = 0, str_len = 0;

	/* getting the string length */
	while (c[i] != '\0')
	{
		str_len++;
		i++;
	}
	/* modifying the string */
	for (i = 0; i < str_len; i++)
		/* check if its lower */
		if (c[i] >= 97 && c[i] <= 122)
			c[i] -= 32;
	return (c);
}

