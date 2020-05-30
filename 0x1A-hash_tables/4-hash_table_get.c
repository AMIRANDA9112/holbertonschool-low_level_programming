#include "hash_tables.h"
/**
 * hash_table_get - search the value with the key
 * @ht: pointer to hash table
 * @key: string data inpur
 * Description: search the key, ant Return the value request associate
 * Return: Returns the value or NULL if key is not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		if (key && strlen(key) > 0)
			index = key_index((unsigned char *)key, ht->size);
		else
			return (NULL);

		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);

}
