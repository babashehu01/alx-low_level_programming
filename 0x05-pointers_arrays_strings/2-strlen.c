#include "main.h"

/**
  * _strlen - finds the length of a given string
  * @s: is the inserted string
  *  Return: length of a string
  */
int _strlen(char *s)
{
	int i, count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
}
