/*
 * File: 0-isupper.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * _isupper - checks if the entered char is uppercase or not
 * @c: is the charater to be checked
 * Return: 1 if upper, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
