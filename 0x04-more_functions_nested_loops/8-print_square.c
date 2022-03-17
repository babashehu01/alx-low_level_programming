#include "main.h"

/**
  * print_square - prints square with #
  * @size: Determines the size of the square
  * Return: This function does not return any value
  */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
		}
	}
}
