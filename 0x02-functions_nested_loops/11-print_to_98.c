#include <stdio.h>

/**
  * print_to_98 - Prints to 98
  * @n: Arguement
  */
void print_to_98(int n)
{
	while (n <= 98)
	{
		printf("%d, ", n);
		n++;
	}
	printf("\n");
}
