#include <stdio.h>
#include "lists.h"

/**
 * print_list - it is function that prints listss
 *
 *@h: is a ptr to the list
 *
 * Return: no of nodes that ll be printed
 */

size_t print_list(const list_t *h)
{
	size_t counterr = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf(("[0] (nil)\n"));
		else
			printf("[%u] %s\n", h->len, h->str);
	counterr++;
	h = h->next;
	}

return(counterr);
}
