#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - print list and return number of elements
 * @head: listint_t
 * @n: n value for node
 *
 * Return: the number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		tmp->next = *head;
		*head = tmp;
	}
	return (tmp);
}
