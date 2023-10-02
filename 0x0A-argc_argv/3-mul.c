#include <stdlib.h>
#include <stdio.h>

/**
 * main - multiplies two given arguments
 * @argc: first argument
 * @argv: secomd argument
 * Return: 0 success 1 otherwise
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
