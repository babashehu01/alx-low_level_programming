#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
		putchar(i);
	for (j = 97; j <= 120; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
