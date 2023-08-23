/*
 * File: 1-strncat.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * *_strncat - cats n elements for the 2nd string
 * @src: string 1
 * @dest: string 2
 * @n: elemens of string1
 * Return: cated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
