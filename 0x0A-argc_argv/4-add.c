#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two numbers
 * @argc: no of args
 * @argv: args
 * Return: 0 success, 1 error
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) + atoi(argv[2]));
		return (0);
	}
	printf("0\n");
	return (0);
}
