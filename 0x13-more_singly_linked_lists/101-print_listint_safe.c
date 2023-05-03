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

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;

		if (head > head->next)
		{
			head = head->next;
		}
		else
		{
			head = head->next;
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (count);
}
