#ifndef HASH_TABLES_H
#define HASH_TABLES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value of key
 * @next: A pointer to the next node
 */
typedef struct node_s
{
	char *key;
	char *value;
	struct node_s *next;
} node_t;
/**
 * struct table_s - Hash table
 *
 * @size: The size of array
 * @array: array of size @size
 */
typedef struct table_s
{
	unsigned long int size;
	node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
#endif
