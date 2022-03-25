#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination to be concatenated
 * @src: source to the concating string
 * @n: bytes
 * return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int *n)
{
	int i, j;
	
	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0' && b < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
