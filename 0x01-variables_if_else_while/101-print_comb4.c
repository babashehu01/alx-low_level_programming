#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  *
  * Author: Babashehu Shettima Musti
  * Desc: program to print all combinations of three digits
  * Date: 14-March-2022
  */
int main(void)
{

	int i;
	int j;
	int k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
