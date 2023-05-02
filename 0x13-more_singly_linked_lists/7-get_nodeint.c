#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a listint_t linked list
 *@head: pointer to the 1st node
 *@index: is the index of the node, starting at 0
 *
 *Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (node == NULL)
		{
			return (NULL);
		}
		node = node->next;
	}
	return (node);
}
