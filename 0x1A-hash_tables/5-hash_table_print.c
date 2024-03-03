#include "hash_tables.h"
/**
 * hash_table_print - print the hash table
 * @ht: the printed hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int i = 0;
	int first = 1;

	printf("{");
	if (!ht || ht->size == 0)
	{
		printf("}\n");
		return;
	}
	node = ht->array[0];
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			first = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
