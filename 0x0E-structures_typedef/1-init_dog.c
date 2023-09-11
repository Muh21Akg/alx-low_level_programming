#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type dog
 * @d: a variable of type dog
 * @name: first member of d
 * @age: second member of d
 * @owner: third member of d
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
