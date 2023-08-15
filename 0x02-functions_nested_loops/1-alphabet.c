#include "main.h"
/**
 * 1-alphabet prints the alphabet followed by a new line
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	char c = 'a';
	while ( c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
