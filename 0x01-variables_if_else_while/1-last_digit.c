#include <stdlib.h>
#include <time.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  *
  * Author: Babashehu Shettima Musti
  * Date: 11-March-2022
  * Program: to print the last digit of an integer
  */

int main(void)
{
	int n, i;

	srand(time(0));
	n = rand() - RAND_MAX /2;

	/* Checking the last digit of the entered integer n */
	last_digit = n % 10;
	/*checking the condition if the last digit is > 5, or = 0, <6*/
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is grater than 5\n", n, last_digit);
	}
	else if ( n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	



}
