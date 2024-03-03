#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_set - add an element to the hash_table
 * @ht: the hash table to add in
 * @key: can't be umpty string
 * @value: associated to the key and can't be umpty
 * Return: successed || not successed
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (!key || !value || !ht || !ht->size || !ht->array)
		return (0);
	int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = ht->array[index];

	if (!node)
	{
		node = malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = malloc(sizeof(char *));
		if (!node->key)
			return (0);
		node->value = malloc(sizeof(char *));
		if (!node->value)
			return (0);

		node->key = (char *)key;
		node->value = (char *)value;
		return (1);
	}
	else
	{
		hash_node_t *new_node = malloc(sizeof(hash_node_t *));

		if (!new_node)
			return (0);
		new_node->key = (char *)key;
		new_node->value = (char *)value;
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}
