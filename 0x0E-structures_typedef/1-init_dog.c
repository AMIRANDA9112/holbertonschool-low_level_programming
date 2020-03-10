#include <stdio.h>
#include "holberton.h"
#include "dog.h"
/**
 * init_dog - dog structure initialize
 * @d: dot structure not initialized.
 * @name: item name.
 * @age: age of item
 * @owner: item property
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
