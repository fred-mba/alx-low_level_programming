#include "hash_tables.h"
/**
 *hash_table_set - adds or updates an element to the hash table
 *@ht: hash table pointer
 *@key: store updated value in hash table
 *@value:the value associated with the key
 *Return: 1 if it succeeded to add an element, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode, *current_element;
	int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current_element = ht->array[idx];

	if (current_element != NULL)
	{
		while(current_element)
		{
			if (strcmp(current_element->key, key) == 0)
			{
				current_element->value = strdup(value);
				return (1); /*update success*/
			}
			current_element = current_element->next;
		}
	}
	/*if key doesn't exist, create new node*/
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = NULL;
	if (ht->array[idx] != NULL)
		newNode->next = ht->array[idx];

	ht->array[idx] = newNode;

	return (1);
}
