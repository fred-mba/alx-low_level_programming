#include "lists.h"
/**
  * dlistint_len - gets length of the list
  * @h: head of the node
  * Return: number of items in the linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
