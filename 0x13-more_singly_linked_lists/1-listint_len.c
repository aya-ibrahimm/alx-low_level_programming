#include "lists.h"

/**
 * listint_len - print list and return number of elements
 * @h: listint_t
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t i = 0;

	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}
