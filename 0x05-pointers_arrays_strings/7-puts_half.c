#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: is the string to be printed
  * return: no return value
  */
void puts_half(char *str)
{
	int  i = 0, length = 0;

	/* finding the length */
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	/* checking conditions for printing */
	if (length % 2 == 1)
		i = length / 2;
	else
		i = (length - 1) / 2;

	for (i++; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
