/*
 * File: 0-strcat.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * *_strcat - cats two strings together
 * @dest: first string
 * @src: second string
 * Return: the cated string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
