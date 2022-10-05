#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array
 * of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: Index of @value (Success), -1 (Fail)
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, i, left = 0, right = size - 1;

	while (left <= right)
	{
		printf("Searching array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
				printf("%d", array[i]);
			else
				printf("%d, ", array[i]);
		}
		printf("\n");
		mid = (left + right) / 2;
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
