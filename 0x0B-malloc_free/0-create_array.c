#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: the character
 * Return: pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	while (size--)
		arr[size] = c;
	return (arr);
}
