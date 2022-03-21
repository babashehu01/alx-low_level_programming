#include "main.h"

/**
  * puts2 - prints every other character of a string
  * @str: holds the string to be printed
  * return: no return value
  */
void puts2(char *str)
{
	int i;

	for (i  = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
