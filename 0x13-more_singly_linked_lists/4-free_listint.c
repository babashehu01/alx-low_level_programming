#include "lists.h"
/**
 * free_listint - free a listint_t list
 * @head: Address of the first node
 *
 * Retuen: no return value
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
