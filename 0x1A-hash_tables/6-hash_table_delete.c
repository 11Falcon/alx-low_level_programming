#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node, *next_node;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];

		while (node != NULL)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
		}
		ht->array[i] = NULL;
	}
	free(ht->array);
	free(ht);
}
