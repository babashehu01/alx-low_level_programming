#include "main.h"

/**
 * _memset - fills memory area with const byte
 * @n: number of bytes to be filled
 * @s: area to be filled
 * @b: is the const byte
 * Return: memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
