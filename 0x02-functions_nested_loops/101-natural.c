#include <stdio.h>

/**
  * main - Sums the multiples of 3
  * Return: Always 0 (Success)
  */
int main(void)
{
	int mult_3;

	mult_3 = 3;
	while (mult_3 < 1024)
	{
		mult_3 += 3;
	}
	printf("%d", mult_3);
	return (0);
}
