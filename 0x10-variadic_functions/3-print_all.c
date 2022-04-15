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
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	va_end(args);
	printf("\n");
}
