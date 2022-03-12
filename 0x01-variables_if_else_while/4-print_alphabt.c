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
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
