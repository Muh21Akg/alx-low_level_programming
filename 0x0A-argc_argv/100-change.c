#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum amount of coins
 * @argc: no of args
 * @argv: rags
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	while (x >= 25)
	{
		x -= 25;
		sum += 1;
	}
	while (x >= 10)
	{
		x -= 10;
		sum += 1;
	}
	while (x >= 5)
	{
		x -= 5;
		sum += 1;
	}
	while (x >= 2)
	{
		x -= 2;
		sum += 1;
	}
	if (x == 1)
	{
		sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
