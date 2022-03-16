#include <stdio.h>

/**
  * main - Sums the multiples of 3
  * Return: Always 0 (Success)
  */
int main(void)
{
	int mult_3 = 1;
	int b;

	while (mult_3 < 1024)
	{
		if ((mult_3 % 3) == 0 || (mult_3 % 5) == 0)
			b += mult_3;
	}
	printf("%d\n", b);
	return (0);
}
