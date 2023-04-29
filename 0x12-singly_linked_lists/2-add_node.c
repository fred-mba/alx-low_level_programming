#include "lists.h"

/**
 *add_node - adds a new node at the beginning of a list_t list
 * *@head: pointer to pointer linked list
 *@str: pointer to list that is to be added a new node
 *Return: a list of nodes including the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list;
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
	new_list->next = *head;

	*head = new_list;

	return (*head);
}
