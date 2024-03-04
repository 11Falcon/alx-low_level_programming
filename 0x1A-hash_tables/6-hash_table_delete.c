#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *node = NULL, *next_node = NULL;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node)
			{
				next_node = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next_node;
			}
		}
	}
	free(ht->array);
	free(ht);
}
