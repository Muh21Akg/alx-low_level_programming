/*
 * File: 0-whatsmyname.c
 * Auth: Muhammad A Abdurrahman
 */

#include <stdio.h>

/**
 * main - prints the progrm name
 * @argc: no of arguments
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
