#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_all - prints everything
 * @format: format specifier
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int chars = strlen(format);
	char separator[] = ", ";
	int i;
	va_list args;

	va_start(args, format);

	while (i < chars)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				printf("%s", va_arg(args, char *));
				break;
			default:
				continue;
		}
		if (i < chars - 1)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
