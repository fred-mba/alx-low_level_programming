#include "hash_tables.h"
/**
 *hash_table_get - retrieves/searches a value associated with a key
 *@ht: pointer to hash table
 *@key: key to retrieve its values
 *Return: value associated with the element, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current_element;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	current_element = ht->array[idx];

	while (current_element != NULL)
	{
		if (strcmp(current_element->key, key) == 0)
		{
			/*Key found, return associated value*/
			return (current_element->value);
		}
		current_element = current_element->next;
	}
	return (NULL);
}
