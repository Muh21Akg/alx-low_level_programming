/*
 * File: 3-strcmp.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: result of comparizon
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	return (i - j);
}
