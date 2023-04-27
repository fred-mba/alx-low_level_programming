#include "lists.h"

/**
 *list_len - returns the number of elements in a linked list_t list.
 *@h: header node
 *
 *Return: number of elments
 */

size_t list_len(const list_t *h)
{
	size_t num_elem;

	for (num_elem = 0; h != NULL; num_elem++)
	{
		h = h->next;
	}
	return (num_elem);
}
