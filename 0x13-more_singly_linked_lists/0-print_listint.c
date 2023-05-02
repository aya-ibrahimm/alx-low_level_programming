#include <stdio.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		i++;
	}
	return (i);
}
