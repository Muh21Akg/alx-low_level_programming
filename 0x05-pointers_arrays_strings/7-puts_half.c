#include "main.h"

/**
 * puts_half - prints the 2nd half of a string
 * @str: holds the address
 */
void puts_half(char *str)
{
	int x, y, z;

	for (x = 0; str[x] != '\0'; x++)
		;
	if (x % 2 == 0)
	{
		y = x / 2;
	}
	else
	{
		y = (x + 1) / 2;
	}
	for (z = y; str[z] != '\0'; z++)
	{
		_putchar(str[z]);
	}
	_putchar('\n');
}
