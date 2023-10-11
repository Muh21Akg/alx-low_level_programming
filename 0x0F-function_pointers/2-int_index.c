#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: holds ther array
 * @size: size of array
 * @cmp: points to function
 *
 * Return: index of element success, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
