/*
 * File: 2-key_index.c
 * Auth: Godsway Asamoah
*/

#include "hash_tables.h"

/**
 * key_index - Starts to get the index
 * @key: Specifies the key to get the index
 * @size: Specifies the size of the array of the hash table
 * Return: The index of the key (Ends)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
