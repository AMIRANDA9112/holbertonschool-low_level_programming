#include <stdlib.h>
#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: Size of the array
 * Return: Pointer to the new Hash table .
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table;

    new_table = malloc(sizeof(hash_table_t));

    if (new_table == NULL)
        return (NULL);

    new_table->size = size;
    new_table->array = calloc(size, sizeof(node_t *));
    if (new_table->array == NULL)
    {
        free(new_table);
        return (NULL);
    }
    return (new_table);
}
