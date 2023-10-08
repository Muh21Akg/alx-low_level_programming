#include "main.h"

/**
 * *_realloc - reallocates a previously allocated spqce
 * @ptr: old array
 * @old_size: size of old array
 * @new_size: size of newly created array
 *
 * Return: ptr to new array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *nptr;
	unsigned int i, nmin;

	if (old_size == new_size)
		return (ptr);
	else if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return (nptr);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		if (new_size < old_size)
			nmin = new_size;
		else
			nmin = old_size;
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		for (i = 0; i < nmin; i++)
			*((char *)nptr + i) = *((char *)ptr + i);
		free(ptr);
		return (nptr);
	}
}
