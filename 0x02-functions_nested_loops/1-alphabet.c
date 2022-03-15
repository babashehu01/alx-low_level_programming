#include "main.h"

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

/* prototyping the print_alphabet */
void print_alphabet(void);

/* main */
int main(void)
{
	print_alphabet();
	return (0);
}

/* Function definition(Called function) */
void print_alphabet(void)
{	int i;
	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
