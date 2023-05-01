#include "lists.h"

/**
 *add_nodeint - adds a new node at the beginning of a listint_t list
 *@head: pointer-to-pointer to the head node address
 *@n: element to be added in the lists
 *
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode = malloc(sizeof(listint_t));

	if (*head == NULL) /*if head is NULL, it is an empty list*/
		return (NULL);
	/*Otherwise add the node*/
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
