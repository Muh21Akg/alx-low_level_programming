#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - frees memory alkocated for var d
 * @d: variable to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
