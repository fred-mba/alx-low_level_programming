#include "lists.h"

/**
 *free_listint2 - sets head to NULL after free up all the nodes
 *
 *@head: pointer-pointer to the head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
