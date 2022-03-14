#include <stdio.h>

/**
  * main - Entry point.
  *
  * Return: Always 0 (Success).
  *
  * Author: Babashehu Shettima Musti.
  * Program: prints all possible different combinations of two digits.
  * Date: 13-March-2022
  */
int main(void)
{
	/* Variables that are gonna hold my loop */
	int i;
	int j = 0;

	/* Outer loop (Determines the number the first index is holding) */
	for (i = 48; i <= 57; i++)
	{
		/* Inner loop (Determines the starting point of the 2nd number) */
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			/* Checking the last digit not to print a comma */
			if (i != 56 || j != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
