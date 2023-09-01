/*
 * File: 0-whatsmyname.c
 * Auth: Muhammad A Abdurrahman
 */
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the progrm name
 * @argc: no of arguments
 * @argv: arguments
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
