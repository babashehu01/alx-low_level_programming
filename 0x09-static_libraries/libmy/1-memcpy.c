#include "main.h"

/**
 * _memcpy - copies @n bytes from memory area @src
 * to memory area @dest
 * @n: number of bytes to be copied
 * @src: where to be copied from
 * @dest: where to be copied to
 *
 * Return: @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
