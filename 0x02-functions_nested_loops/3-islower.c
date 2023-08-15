/*
 * File: 3-islower.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * _islower - checks for lowercase chararcters
 * @c: is the character to be checked
 * Return: 1 if character is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
