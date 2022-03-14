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
		for (j = 48; j <= 57; j++)
		{
			for (k = 48; k <= 57; k++)
			{
				if (e != i && e != g && i != g && e < i && i < g)
				{
					putchar(e);
					putchar(i);
					putchar(g);
					if (i == 56 && e == 55 && g == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
