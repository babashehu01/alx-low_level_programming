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

	for(i = 97; i <= 122; i++)
	{
		for(j = 97; j <= 122; j++)
		{
			putchar(i);
			putchar(',');
			putchar(j);
		}
		putchar('/n');
	}
	return (0);
}
