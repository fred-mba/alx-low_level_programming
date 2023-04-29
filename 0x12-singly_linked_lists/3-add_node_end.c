#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of list_t list
 * @head: pointer to pointer to list_t list
 * @str: needs to be duplicated
 * Return: the address of the new element, or NULL if it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_list, *tmp;
	int i;

	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	new_list->str = strdup(str);
	if (new_list->str == NULL)
	{
		free(new_list);
		return (NULL);
	}
	new_list->len = i;
	new_list->next = NULL;

	if (*head == NULL)
		*head = new_list;

	else if ((*head)->next == NULL)
		(*head)->next = new_list;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_list;
	}
	return (new_list);
}
