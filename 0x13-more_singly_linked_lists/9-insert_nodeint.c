#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: pointer pointer to the 1st node in the linked lists
 *@idx:the index of the list where the new node should be added
 *@n: new element to be added in the linked lists
 *Return: the address of the new node, or NULL if it failed
 *	if it is not possible to add the new node at index idx,
 *	do not add the new node and return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *current;

	current = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = current;
		*head = newnode;
		return (*head);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (!current)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = current->next;
	current->next = newnode;

	return (newnode);
}
