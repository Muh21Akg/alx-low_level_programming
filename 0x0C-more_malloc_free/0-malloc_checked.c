#include "main.h"

/**
 * *malloc_checked - allocates memory and checks for failure
 * @b: size of memory block to be allocated
 *
 * Return: void pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
