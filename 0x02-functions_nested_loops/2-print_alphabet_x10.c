/*
 * File: 2-print_alphabet_x10.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * 2-print_alphabet_x10 - prints the alphabets 10 times in a different line
 */
void print_alphabet_x10(void)
{
	int i;
	for (i = 1 ; i <= 10 ; i++)
	{
		char x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
	}
}

