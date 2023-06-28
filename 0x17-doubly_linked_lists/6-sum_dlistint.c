#include "lists.h"
/**
  * sum_dlistint - returns the sum of all the data (n) of
  *	a dlistint_t linked list
  * @head: head of the list
  * Return: if the list is empty, return 0
  */
int sum_dlistint(dlistint_t *head)
{
	int counter = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		counter = counter + head->n;
		head = head->next;
	}
	return (counter);
}
