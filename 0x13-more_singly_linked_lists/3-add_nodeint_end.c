#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - print list and return number of elements
 * @head: listint_t
 * @n: n value for node
 *
 * Return: the number of elements
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = *head;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
		return (*head);
	}
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = malloc(sizeof(listint_t));
	if (tmp->next == NULL)
	{
		return (NULL);
	}
	(tmp->next)->n = n;
	(tmp->next)->next = NULL;
	return (tmp->next);
}
