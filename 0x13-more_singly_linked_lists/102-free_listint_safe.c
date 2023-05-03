#include "lists.h"

/**
 *free_listint_safe - frees a listint_t list.
 *Description: This function can free lists with a loop
 *@h: double pointer to the head of a linked list
 *The function sets the head to NULL
 *Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *bin;
	size_t i = 0;

	current = *h;
	while (curr != NULL)
	{
		i++;
		bin = current;
		current = current->next;
		free(bin);

		if (bin < current)
			break;
	}
	*h = NULL;

	return (i);
}
