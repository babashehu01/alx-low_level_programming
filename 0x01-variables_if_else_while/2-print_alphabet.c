#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  *
  * Author: Babashehu Shettima Musti
  * Date: 11-March-2021
  * Program: Prints letter a-z
  * ch = Character
  */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	return (0);
}
