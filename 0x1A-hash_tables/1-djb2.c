/*
 * File: 1-djb2.c
 * Auth: Godsway Asamoah
 */

#include "hash_tables.h"

/**
 * hash_djb2 - Starts to hash function implementing the djb2 algorithm
 * @str: Specifies the string to hash
 * Return: The calculated hash (Ends)
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

	return (hash);
}
