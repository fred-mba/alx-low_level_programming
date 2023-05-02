#include "lists.h"

/**
 *reverse_listint - reverses a listint_t linked list
 *@head: pointer-pointer to the 1st node
 *Not allowed to use more than 1 loop
 *Not allowed to use malloc, free or arrays
 *Can only declare maximum of two variables in the function
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL, *prev = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = current;
	}

	*head = prev;
	return (*head);
}
