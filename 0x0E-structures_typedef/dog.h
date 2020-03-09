#ifndef DOG_H
#define DOG_H
/**
 * struct dog - item
 * @name: item name
 * @age: item age
 * @owner: property of item
 * Description: Describe 3 data dog item.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
