#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the structure
 * Return: Length of node
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		node++;
	}
	return (node);
}
