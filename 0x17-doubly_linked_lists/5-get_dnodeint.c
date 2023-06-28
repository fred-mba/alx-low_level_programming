#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the list
 * @index: number of node
 * Return: the node of the index
 *	if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int counter = 0;

	if (head == NULL)
		return (NULL);
	while (counter != index)
	{
		if (temp == NULL)
			return (NULL);
		counter++;
		temp = temp->next;
	}
	return (temp);
}
