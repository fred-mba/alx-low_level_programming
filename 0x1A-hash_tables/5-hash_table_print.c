#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 *@ht: hash table pointer
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char tmp = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (tmp == 1)
				printf(", ");
			printf("'%s' : '%s'", node->key, node->value);
			tmp = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
