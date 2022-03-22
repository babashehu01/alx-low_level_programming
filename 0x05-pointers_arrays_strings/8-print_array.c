#include "main.h"

/**
  * print_array - prints array n times
  * @n: number of elements to be printed
  * @a: elements of the array
  * return: no return value
  */
void print_array(int *a, int n)
{
	int i = 0; 

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar(a[i]);
	}
	_putchar('\n');
}
