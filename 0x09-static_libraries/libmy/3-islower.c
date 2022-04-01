#include "main.h"

/**
  * _islower - checks if a char is lower or not
  *
  * Return: 1 for lower and 0 for not lower
  * @c: Character in ASCII
  */
int _islower(int c)
{
	if (c >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
