#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  * Author: Babashehu Shettima Musti
  * Program: Prints a-z in both lower and upper case
  */
int main(void)
{
	int up;
	int dn;

	for (up = 97; up <= 122; up++)
		putchar(up);
	for (dn = 65; dn <= 90; dn++)
		putchar(dn);
	putchar('\n');
	return (0);
}
