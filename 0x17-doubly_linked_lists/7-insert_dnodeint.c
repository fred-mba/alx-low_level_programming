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
	dlistint_t *copy, *temp, *new_node;
	unsigned int i = 0;

	copy = *h;
	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0 && *h == NULL)
	{
		new_node->next = copy, *h = new_node;
		return (*h);
	}
	while (copy != NULL)
	{
		if (idx == 0)
		{
			new_node->next = *h, copy->prev = new_node;
			new_node->prev = NULL, *h = new_node;
			return (*h);
		}
		if (i == (idx - 1))
		{
			if (copy->next == NULL)
			{
				new_node->next = NULL, new_node->prev = copy;
				copy->next = new_node;
				return (new_node);
			}
			temp = copy->next, new_node->next = temp;
			temp->prev = new_node, new->prev = copy;
			copy->next = new_node;
			return (new_node);
		}
		i++;
		copy = copy->next;
	}
	return (NULL);
}
