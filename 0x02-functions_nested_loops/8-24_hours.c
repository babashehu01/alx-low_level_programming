#include "main.h"

/**
  * jack_bauer - Prints the minutes of a day
  */
void jack_bauer(void)
{
	int i, j, k, l;

	for (j = 48; i <= 50; i++)
	{
		for (j = 48; j <= 51; j++)
		{
			for (k = 48; k <= 53; k++)
			{
				for (l = 48; l <= 57; l++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
}
