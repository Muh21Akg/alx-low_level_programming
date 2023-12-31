#include "main.h"

/**
 * _strlen_recursion - calculates length of a string using recursion
 * @s: given string
 * Return: lenght of the given string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
