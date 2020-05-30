#include "hash_tables.h"
/**
 * hash_table_set - gives the index of a key
 * @ht: pointer to hash table
 * @key: string, input data
 * @value: The value of key
 * Description: Returns the index at which the key/value pair should be stored
 *  in the array of the hash table
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	node_t *key_node = NULL, *tmp = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		if (key && strlen(key) > 0)
			index = key_index((unsigned char *)key, ht->size);
		else
			return (0);

		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}

		key_node = malloc(sizeof(node_t));
		if (!key_node)
			return (0);
		key_node->key = strdup(key);
		key_node->value = strdup(value);
		key_node->next = ht->array[index];
		ht->array[index] = key_node;

		return (1);
	}
	return (0);

}
