#include <stdio.h>

/**
  * print_array - prints array n times
  * @n: number of elements to be printed
  * @a: elements of the array
  * return: no return value
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
	}
		printf("\n");
}
