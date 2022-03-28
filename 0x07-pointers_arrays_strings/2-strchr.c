#include "main.h"

/**
 * _strchr - checks for a special character in a string
 * @s: is the string to be checked
 * @c: store the first occurence of a character
 * 
 * Return: @c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s);
		}
		i++;
	}
	return ('\0');
}
