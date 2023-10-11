#include "function_pointers.h"

/**
 * array_iterator - iterates a function over an array
 * @array: array to be iterated over
 * @size: size of array
 * @action: call bqck function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
