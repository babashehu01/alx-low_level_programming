#include <stdio.h>

/**
  * main - Entry poinnt
  *
  * Return: Always 0 (Success)
  *
  * Author: Babashehu Shettima Musti
  * Date: 12-March-2021
  * Program: Print a-z except q and e
  */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		if (char(ch) == 'q' || char(ch) == 'e')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
