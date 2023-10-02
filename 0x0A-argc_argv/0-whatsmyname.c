#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints its name
 * @argc: first argument
 * @argv: second argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
