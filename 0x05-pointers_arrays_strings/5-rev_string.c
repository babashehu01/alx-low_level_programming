#include "main.h"

/**
  * re_string - reverses a string
  * @s: is the reversing string
  * return: no return value
  */
void re_string(char *s)
{
	int i = 0, length = 0, swap;

	/* getting the length of the string */
	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	/* swaping the strings */
	for (i = 0; i <= length / 2; i++)
	{
		swap = s[i];
		s[i] = s[length - i];
		s[length - 1] = swap;
	}
	/* printing the string */
	for (i = 0; i < length; i++)
	{
		_putchar(s[i]);
	}
}
