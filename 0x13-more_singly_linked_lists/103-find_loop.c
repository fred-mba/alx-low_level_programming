#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 *@head: pointer to the head node
 *Not allowed to use malloc, free or arrays
 *Can only declare a maximum of two variables in your function
 *
 *Return: The address of the node where the loop starts,
 *	or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *prev = head, *current = head;

	while (current != NULL && current->next != NULL)
	{
		prev = prev->next;
		current = current->next->next;

		if (prev == current) /*loop found*/
		{
			prev = head;

			while (prev != current)
			{
				prev = prev->next;
				current = current->next;
			}
			return (prev);
		}
	}

	return (NULL); /*No loop found*/
}
