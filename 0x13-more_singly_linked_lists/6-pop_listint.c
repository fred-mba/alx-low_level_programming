#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: pointer-pointer to the 1st node
 *if the linked list is empty return 0
 *Return:the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int value;

	if (head == NULL)
	{
		return (0);
	}
	value = (*head)->n; /*save the value of the 1st node*/
	ptr = *head; /*save the pointer*/
	*head = ptr->next;
	free(ptr);

	return (value); /*Return the value of the 1st node*/
}
