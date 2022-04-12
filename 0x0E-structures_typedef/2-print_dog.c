#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a structure
 * @d: structure to print
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
