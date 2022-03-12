#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  *
  * Author: Babashehu Shettima Musti
  * Date: 2-March-2022
  * Program: Prints integers in reverse
  */
int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
