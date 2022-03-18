#include "main.h"

/**
  * print_line - Prints _
  * Return: Does not return any value
  * @n: Number of _ to be printed
  */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n')
}
