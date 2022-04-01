#include "main.h"

/**
  * _strcpy - copies a string
  * @dest: destination
  * @src: source
  * Return: copied string
  */
char *_strcpy(char *dest, char *src)
{
	int len1 = 0, len2 = 0, i = 0;

	/* length of destination */
	while (dest[i] != '\0')
	{
		len1++;
		i++;
	}
	/* length of source */
	i = 0;
	while (src[i] != '\0')
	{
		len2++;
		i++;
	}
	/* appending source to destination */
	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}
	return (dest);
}
