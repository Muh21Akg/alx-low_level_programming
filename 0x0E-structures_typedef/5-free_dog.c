#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - deallocates a space allocated previously by malloc
 * @d: address of space to be de allocated
 */
void free_dog(dog_t *d)
{
	free(d);
}
