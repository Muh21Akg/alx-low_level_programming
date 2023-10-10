#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - creates a variable of type dog
 * @d: name of the variable
 * @name: first elwment
 * @age: second element
 * @owner: third element
 *
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
