#include "main.h"

/**
 * _print_rev_recursion - prints a string an reverse using recursion
 * @s: address of string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
