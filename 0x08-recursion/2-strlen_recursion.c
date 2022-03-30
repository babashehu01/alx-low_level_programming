#include "main.h"

/**
 * _strlen_recursion - calculates the length of a string
 * @s: is the given string
 * Return: length of a givven string @s
 */
int _strlen_recursion(char *s)
{
	unsigned int length;

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
