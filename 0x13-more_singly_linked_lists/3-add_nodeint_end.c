#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a listint_t list
 *@head: pointer-to-pointer to the head node
 *@n: new node to add  in the head node
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *lastnode;

	if (head == NULL)

		return (NULL);
	/*create a new node*/
	new = malloc(sizeof(listint_t));
	if (new == NULL)

		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL) /*If head is NULL, it is an empty list*/
	{
		*head = new;
		return (*head);
	}

	lastnode = *head; /*find the last node and add the newnode*/
	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next; /*last node's new address will be NULL*/
	}
	/*add the new node at the end of the linked list*/
	lastnode->next = new;

	return (*head);
}
