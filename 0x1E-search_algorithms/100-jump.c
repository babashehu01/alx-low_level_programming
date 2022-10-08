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
	int left = 0, right = sqrt(size);
	
	while (left < (int)size)
	{
		printf("Value checked array [%d] = [%d]\n", left, array[right]);
		if (value == array[left])
		{
			printf("Value found between indexes [%d] and [%d]\n", left, right);
			printf("Value checked array [%d] {%d}\n", left, array[left]);
			return (left);
		}
		printf("Value checked array [%d] = [%d]\n", right, array[right]);
		if (value == array[right])
		{
			printf("Value found between indexes [%d] = [%d]\n", left, right);
			printf("Value checked array [%d] = [%d]\n", right, array[right]);
			return (right);
		}
		if (value < array[right])
		{
			printf("Value found between indexes [%d] {%d}\n", left, right);
			while (left < right)
			{
				printf("Value checked array [%d] = [%d]\n", left, array[left]);
				left++;
				return (left);
			}
		}
		else
		{
			left = right;
			right += 3;
		}
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	return (-1);
}
