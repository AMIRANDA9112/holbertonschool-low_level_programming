#include"hash_tables.h"
/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node;

	for (index = 0; index < ht->size; index++)
	{
		while (ht->array[index] != NULL)
		{
			node = ht->array[index]->next;
			free(ht->array[index]->value);
			free(ht->array[index]->key);
			free(ht->array[index]);
			ht->array[index] = node;
		}
	}
	free(ht->array);
	free(ht);
}
