#include "hash_tables.h"
/**
 * key_index - the index of a key
 * @key: the searched key
 * @size: size of the hash_table
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
