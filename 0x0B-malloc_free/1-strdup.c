#include <stdlib.h>

/**
 * _strdup - allocates a new space in the memory
 * @str: string given as parameter
 * Return: pointer to the newly allocated space
 */
char *_strdup(char *str)
{
	char *new_malloc;
	int i;

	if (str == NULL)
		return (NULL);
	/* Allcoating new space */
	new_malloc = malloc(sizeof(str));
	/* checking condition */
	if (new_malloc == NULL)
		return (NULL);
	/* Copying the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		new_malloc[i] = str[i];
	}
	new_malloc += '\0';
	return (new_malloc);
	free(new_malloc);

}
