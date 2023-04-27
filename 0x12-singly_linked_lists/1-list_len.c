#include <stdio.h>
#include "lists.h"

/**
 * list_len - it is function that prints listss
 *
 *@h: is a ptr to the list
 *
 * Return: no of nodes that ll be printed
 */

size_t list_len(const list_t *h)
{
	size_t counterr = 0;

	while (h != NULL)
	{
	counterr++;
	h = h->next;
	}

return (counterr);
}
