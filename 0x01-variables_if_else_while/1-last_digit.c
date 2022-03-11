#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  *
  * ld = Last Digit
  * Author: Babashehu Shettima Musti
  * Date: 11-March-2022
  * Program: to print the last digit of an integer
  */

int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Checking the last digit of the entered integer n */

	ld = n % 10;

	/*checking the condition if the last digit is > 5, or = 0, <6*/

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
