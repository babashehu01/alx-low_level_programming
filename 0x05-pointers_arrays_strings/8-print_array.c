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

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
