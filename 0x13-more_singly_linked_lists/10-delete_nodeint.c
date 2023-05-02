#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index of a linked list
 *@head: head pointer
 *@index: the index of the node that should be deleted
 *
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *temp;
	unsigned int i;

	if (*head == NULL) /*check if the list is empty*/
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	temp = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}

	del = temp->next;
	temp->next = del->next;
	del->next = NULL;
	free(del);

	return (1);
}
