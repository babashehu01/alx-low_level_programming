#include "main.h"

/**
  * _isdigit - Checks for a digit
  * @c: holds unknown character
  * Return: 1 if c is a digit, and 0 if not
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
