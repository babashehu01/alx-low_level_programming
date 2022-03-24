#include "main.h"
/**
 * _strcat - joins two strings together
 * @dest: where it is going to be joint to
 * @src: the string to be joint
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, len1 = 0, len2 = 0;
	/* getting the destination length */
	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	/* getting length of src */
	while (src[j] != '\0')
	{
		len2++;
		i++;
	}
	/* appending source into destination */
	for (i = 0; i <= len2; i++)
	{
		*dest[len2 + i] = *src[i];
	}
	return (dest);
}

