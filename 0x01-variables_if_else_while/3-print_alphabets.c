#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	char up;
	char dn;

	for (up = 'a', up <= 'z'; up++)
		putchar(up);
	for (dn = 'A'; dn <= "Z"; dn++)
		putchar(dn);
	return (0);
}
