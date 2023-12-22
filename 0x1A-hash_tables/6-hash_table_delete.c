#include "hash_tables.h"

/**
 *hash_table_delete - deletes hash table
 *@ht: hash table pointer
 *Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *prev;
	unsigned long int sp, i;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0, sp = ht->size; i < sp; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			prev = tmp;
			tmp = tmp->next;
			free(prev->key);
			free(prev->value);
			free(prev);															}
	}
	free(ht->array);
	free(ht);
}
