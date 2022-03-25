#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: to destination
 * @src: from src
 * @n: number of characters to be copied
 * Return: a pointer to the copy of the string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
