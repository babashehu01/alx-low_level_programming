#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: is the string to be printed
  * return: no return value
  */
void puts_half(char *str)
{
	int n, i = 0, length = 0;

	/* finding the length */
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	/* checking conditions for printing */
	for (i = 0; i < length; i++)
		if (length % 2 != 0)
		{
			n = (length - 1) / 2;
			_putchar(n);
		}
	_putchar('\n');
}
