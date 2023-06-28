#include "lists.h"
/**
  * add_dnodeint - adds a node to the beginning of a doubly linked list
  * @head: Head of the linked list
  * @n: value to be added to the list
  * Return: pointer to the added element
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = *head;
	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->prev = NULL;
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
