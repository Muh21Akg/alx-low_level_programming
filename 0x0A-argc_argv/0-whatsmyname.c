/*
 * File: 0-whatsmyname.c
 * Auth: Muhammad A Abdurrahman
 */

#include <stdio.h>

/**
 * main - prints the progrm name
 * Return: 0 success
 */
int main (int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
