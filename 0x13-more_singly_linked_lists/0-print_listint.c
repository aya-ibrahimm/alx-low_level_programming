#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print list and return number of elements
 * @h: listint_t
 *
 * Return: the number of elements
 */
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
