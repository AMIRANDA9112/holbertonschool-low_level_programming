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
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 * struct table_s - Hash table
 *
 * @size: The size of array
 * @array: array of size @size
 */
typedef struct hash_table_s
{
	unsigned long int size;
    hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
#endif
