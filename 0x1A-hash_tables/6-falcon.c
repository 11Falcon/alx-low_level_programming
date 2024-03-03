#include "hash_tables.h"
/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *new_node, *node;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if(node->next)
				new_node = new_node->next;
			else
				continue;
			free(node->key);
			free(node->value);
			free(node);
			node = new_node;
		}
	}
	free(ht->array);
	free(ht);
}
