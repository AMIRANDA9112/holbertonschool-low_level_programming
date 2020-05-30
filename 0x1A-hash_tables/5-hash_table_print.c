#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int index;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (i == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			i = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
