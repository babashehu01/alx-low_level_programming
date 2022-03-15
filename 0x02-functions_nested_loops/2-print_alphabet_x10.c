#include "main.h"

/**
  * print_alphabet_x10 - print 10x a-z
  *
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
}
