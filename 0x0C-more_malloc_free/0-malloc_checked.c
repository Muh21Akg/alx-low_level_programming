#include "main.h"

/**
 * *malloc_checked - allocates memory blocks for different types
 * @b: size of memory
 * Return: pointer to memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(sizeof(unsigned int) * b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
