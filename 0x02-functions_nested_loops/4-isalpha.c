/*
 * File: 4-isalpha.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * _isalpha - checks if the input letter is a letter or not
 * @c: is the input to be checked
 * Return: 1 if it's a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
