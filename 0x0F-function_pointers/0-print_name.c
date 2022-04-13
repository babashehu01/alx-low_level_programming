#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to printing function
 * Return: no return value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
