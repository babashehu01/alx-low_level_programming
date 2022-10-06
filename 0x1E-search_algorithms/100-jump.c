#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array
 * of integers using the Jump search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: first index where value is located or -1 (Fail)
 */
int jump_search(int *array, size_t size, int value)
{
	int i, left = 0, right = sqrt(size);

	while (left <= (int)size)
	{

	printf("Value checked array[%d] = [%d]\n", left, array[left]);
	if (array[left] <= value && array[right] >= value)
	{
		printf("Value found between indexes [%d] and [%d]\n", left, right);
		for (i = left; i <= right; i++)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	else
	{
		left = right;
		right += right;
	}

	}
	return (-1);
}
