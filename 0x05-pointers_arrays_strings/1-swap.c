#include "main.h"

/**
  * swap_int - swaps two integer values
  * @a: holds the first integer
  * @b: holds the second integer
  * Return: there is no return value for this func
  */
void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
