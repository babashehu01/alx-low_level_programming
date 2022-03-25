#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal
 */
_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1 == s2)
	{
		/* Adding values of si and s2 */
		s1++;
		s2++;
	}
	return (s1 - s2);
}
