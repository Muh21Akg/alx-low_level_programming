/*
 * File: 0-create_array.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"
#include <string.h>

/**
 * create_array - creqtes an array malloc
 *@size: size of array
 *@c: value of array elements
 * Return: 0 success
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(sizeof(char) * size);
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
