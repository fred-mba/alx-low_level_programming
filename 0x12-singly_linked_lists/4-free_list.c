#include "lists.h"

/**
 * free_list - Frees a list of nodes
 * @head: pointer to the 1st node
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
