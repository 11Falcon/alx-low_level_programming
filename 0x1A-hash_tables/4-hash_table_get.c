#include "hash_tables.h"
/**
 * hash_table_get - retreive a value from theTable
 * @ht: the hash table;
 * @key: the key of the retreived value
 * Return: key : value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	if (!ht || !key || !ht->array)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	printf("%d\n", index);
	node = ht->array[index];
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		else if (!node->next)
			return (NULL);
		node = node->next;
	}
	return (NULL);
}
