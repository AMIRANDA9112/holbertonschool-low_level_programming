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
    node_t *newNode = NULL, *tmp = NULL;
    unsigned long int index = 0;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

    index = key_index((unsigned char *)key, ht->size);

    for (tmp = ht->array[index]; tmp != NULL; tmp = tmp->next)
    {
        if (strcmp(tmp->key, key) == 0)
        {
            free(tmp->value);
            tmp->value = strdup(value);
            if (tmp->value == NULL)
                return (0);
            return (1);
        }
    }
    newNode = malloc(sizeof(node_t));
    if (newNode == NULL)
        return (0);

    newNode->key = strdup(key);
    if (newNode->key == NULL)
    {
        free(newNode);
        return (0);
    }
    newNode->value = strdup(value);
    if (newNode->value == NULL)
    {
        free(newNode->key);
        free(newNode);
        return (0);
    }
    newNode->next = ht->array[index];
    ht->array[index] = newNode;
    return (1);
}
