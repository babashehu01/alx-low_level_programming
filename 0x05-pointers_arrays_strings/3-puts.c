#include "main.h"

/**
  * _puts - prints a string to stdout
  * @str: is the inputted string
  * Return: no return value
  */
void _puts(char *str)
{
	int i;

	i = 0;
	length = 0;
	/* finding the length of the string */
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	/* accessing the string */
	for (i = 0; i < length; i++)
	{
		/* printing the string */
		_putchar(str[length]);
	}

}
