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
	size_t start, end, step;

	if (!array || size == 0)
		return (-1);
	step = sqrt(size);
	start = 0, end = step;

	while (start < size)
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (end < size)
		{
			if (array[start] <= value && value <= array[end])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", start, end);
				break;
			}
		} else
		{
			if (array[start] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", start, end);
				break;
			}
		}
		start = end;
		end = start + step;
	}

	while (start <= end)
	{
		if (start == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
		start++;
	}

	return (-1);
}
