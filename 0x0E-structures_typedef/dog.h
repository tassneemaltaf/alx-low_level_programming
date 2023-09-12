#ifndef _DOG_H_
#define _DOG_H_

typedef struct dog dog_t;

/**
 * struct dog - contains dog info
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
