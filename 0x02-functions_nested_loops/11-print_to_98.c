#include <stdio.h>

/**
  * print_to_98 - Prints to 98
  * @n: Arguement
  */
void print_to_98(int n)
{

	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
		printf("%d\n", n);
}
