#include "main.h"

/**
 * print_rev - prints a string in reversed order
 * @s: holds the address
 */
void print_rev(char *s)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
		;
	for (y = x; y >= 0; y--)
	{
		_putchar(s[y]);
	}
}
