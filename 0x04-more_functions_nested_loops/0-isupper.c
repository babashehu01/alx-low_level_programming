#include "main.h"

/**
  * _isupper - Checks for upper case letters
  *
  * Return: 1 if upper and 0 otherwise
  * @c: Carries the letter
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
