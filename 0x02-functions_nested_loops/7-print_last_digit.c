#include "main.h"

/**
  * print_last_digit - Checks for the last digit of an int
  *
  * Return: Returns the last digit
  * @n: Is the absolute arguement
  */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	return (n);
}
