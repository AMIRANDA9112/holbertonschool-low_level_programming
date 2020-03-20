#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Struct */

/**
 * struct list - linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;


/* Prototype */

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif
