#include <stdlib.h>
#include "dog.h"

/**
 * *new_dog - creates a new var of type dog_t
 * @name: first element
 * @age: second element
 * @owner: third element
 * Return: a pointer to the created var
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	doggo.name = name;
	doggo.age = age;
	doggo.owner = owner;
	return (doggo);
}
