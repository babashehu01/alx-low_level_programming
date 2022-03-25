#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal or j if not
 */
_strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0, j = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1 == s2)
	{
		/* Adding values of si and s2 */
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
