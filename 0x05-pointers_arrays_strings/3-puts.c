/*
 * File: 3-puts.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * _puts - prints the string
 * @str: the address of string
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
}
