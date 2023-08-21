/*
 * File: 2-strlen.c
 * Auth: Muhammad A Abdurrahman/
 */

#include "main.h"

/**
 * _strlen - calculates the lwngth of a string
 * @s: points to the first element
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}
