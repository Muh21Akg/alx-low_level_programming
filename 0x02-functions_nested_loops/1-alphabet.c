/**
 * File: 1-alphabet.c
 * Auth: Muhammad A. Abdurrahaman
 */
#include "main.h"
/**
 * print_alphabet: prints the alphabet followed by a new line
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
