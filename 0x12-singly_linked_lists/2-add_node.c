#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t new_char;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (new_char = 0; str[new_char]; new_char++)
		;
	new->len = nchar;
	new->next = *head;
	*head = new;
	return (*head);
}
