#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: the given index
 * @n: value of the new node
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (!tmp)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		tmp->prev = new;
		*h = new;
		return (new);
	}
	for ( ; idx > 1 && tmp->next; idx--)
		tmp = tmp->next;
	if (idx > 1 && !tmp->next)
		return (NULL);
	new->prev = tmp;
	new->next = tmp->next ? tmp->next : NULL;
	if (tmp->next)
		tmp->next->prev = new;
	tmp->next = tmp->next && idx > 1 ? NULL : new;
	return (new);
}
