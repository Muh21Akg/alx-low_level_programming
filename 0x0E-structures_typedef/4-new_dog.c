#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - allocates space for and creates a variable of type dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog's owner
 *
 * Return: pointer to newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(*ptr));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
