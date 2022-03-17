#include <stdio.h>

/**
  * main - checks fizz buzz and either
  * Return: 0 on success and 1 for a fault
  */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
