#include "main.h"
/**
 * _strcat - joins two strings together
 * @dest: where it is going to be joint to
 * @src: the string to be joint
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
        int i = 0, j, len1 = 0;
        /* getting the destination length */
        while (dest[i] != '\0')
        {
                len1++;
                i++;
        }
        for (i = len1 + 1, j = 0; src[i] != '\0'; i++, j++)
        {
                dest[i] = src[j];
        }
	dest[i] = '\0';
        return (dest);
}

