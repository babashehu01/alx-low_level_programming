#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, j, k, l, op1, op2;

	for (l = 48; l <= 57; l++)
	{
		for (k = 48; k <= 57; k++)
		{
			for (j = 48; j <= 57; j++)
			{
				for (i = 48; i <= 57; i++)
				{
				op1 = (l * 10) + k;
				op2 = (j * 10) + i;
				if (op1 < op2)
				{
					putchar(l);
					putchar(k);
					putchar(' ');
					putchar(j);
					putchar(i);
				if (l == 57 && k == 56 && j == 57 && i == 57)
					break;
					putchar(',');
					putchar(' ');
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
