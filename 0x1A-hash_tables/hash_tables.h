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
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct node_s
{
	char *key;
	char *value;
	struct node_s *next;
} node_t;

typedef struct table_s
{
	unsigned long int size;
	node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
#endif
