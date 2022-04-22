#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: pointer to the ode
 * Return: number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		h = h->next;
		node++;
	}
	return (node);
}
