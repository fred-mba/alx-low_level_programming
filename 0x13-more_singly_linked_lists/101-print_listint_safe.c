#include "lists.h"

/**
 *print_listint_safe - prints a listint_t linked list.
 *@head: pointer to 1st node
 *This function can print lists with a loop
 *If the function fails, exit the program with status 98
 *Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			break;
		}

		current = current->next;
	}
	if (current != NULL)
		exit(98);

	return (count);
}
