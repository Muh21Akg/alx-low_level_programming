#ifndef _HEADER_
#define _HEADER_
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a structue with the name dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: structuer with three members: name of type string,
 * age of type float, and owner of type string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
