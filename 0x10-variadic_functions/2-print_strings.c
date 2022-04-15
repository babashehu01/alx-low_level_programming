#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints a string
 * @separator: separates each string
 * @n: number of strings to be printed
 *
 * Return: returns no value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (!str)
			printf("nil");
		else
			printf("%s", str);
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
