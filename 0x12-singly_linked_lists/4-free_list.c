#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it will free the list
 *
 *@head: list to be free
 *
 */

void free_list(list_t *head)
{
	list_t *te;

	while (head)
	{
		te = head;
		head = head->next;
		free(te->str);
		free(te);

	}
}
