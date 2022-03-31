#include <stdio.h>


/**
  * main - prints all possible
  *combination of a single digit number
  * Return: Always 0
  */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			putchar(i);
			putchar(j);
			putchar(',');
			putchar(' ');
		}

	}
}
