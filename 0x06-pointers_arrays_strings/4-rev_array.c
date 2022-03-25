#include "main.h"

/**
 * reverse_array - reverses a given array
 * @a: the array to be reversed
 * @n: number of element of the array
 * return: no return value
 */
void reverse_array(int *a, int n)
{
	int i, j, k = 0;

	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		k = a[j];
		a[j] = a[i];
		a[i] = k;
	}
}
