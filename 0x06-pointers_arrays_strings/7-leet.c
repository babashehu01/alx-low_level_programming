#include "main.h"

/**
 * leet - encrypts a string into 1337
 * @s: is the string
 * Return: encrypted string
 */
char *leet(char *s)
{
	int i, j, code, repl;

	code[] = "aAeEoOtTlL";
	repl[] = "4433007711";
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (code[j] != '\0')
		{
			if (str[i] == code[j])
			{
				str[i] = repl[j];
			}
			j++;
		}
		i++;
	}
}
