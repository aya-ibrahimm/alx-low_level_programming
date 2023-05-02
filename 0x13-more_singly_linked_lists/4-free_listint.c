#include "lists.h"

/**
 * free_listint - free the nodes
 * @head: head noe
 *
 */
void free_listint(listint_t *head)
{
	listint_t  *node = head;

	while (node != NULL)
	{
		head = node->next;
		free(node);
		node = head;
	}
}
