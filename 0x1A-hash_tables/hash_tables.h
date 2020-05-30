#ifndef HASH_TABLES_H
#define HASH_TABLES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//CREATE HASH TABLE//

//NODE//
typedef struct node_s
{
    char *key;
    char *value;
    struct node_s *next;
} node_t;

//TABLE

typedef struct table_s
{
    unsigned long int size;
    node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
#endif //HASH_TABLES_H
