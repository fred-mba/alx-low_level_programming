#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *
 *@h: pointer to linked list head
 *
 *Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);

	for (count = 1; h->next != NULL; count++)
	{
		if (h->str == NULL)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	return (count);
}
