/*
 * File: 4-hash_table_get.c
 * Auth: Godsway Asamoah
*/

#include "hash_tables.h"

/**
 * hash_table_get - Starts to retrieve the value associated with a key
 * @ht: Specifies a pointer to the hash table
 * @key: Specifies the key to get the value of
 * Return: NULL if the key cannot be matched (Ends)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
