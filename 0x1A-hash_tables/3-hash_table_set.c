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
	int index;
	hash_node_t *node;

	if (!ht)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node && strcmp(node->key, key) == 0)
	{
		free(node->value);
		node->value = strdup(value);
		if (!node->value)
			return (0);
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = malloc(sizeof(char *));
	node->value = malloc(sizeof(char *));
	node->key = strdup(key);
	node->value = strdup(value);
	if (!node->value || !node->key || !node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	if (!ht->array[index])
	{
		ht->array[index] = node;
		return (1);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
