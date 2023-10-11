#include "function_pointers.h"

/**
 * print_name - prints a given name
 * @name: points to the name to be printed
 * @f: points to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
