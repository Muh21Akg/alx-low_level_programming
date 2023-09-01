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
	int x, y, z, t, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	if (x / 25 > 0)
	{
		sum += x / 25;
	}
	if (x / 10 > 0)
	{
		y = x % 25;
		sum += y / 10;
	}
	if (x / 5 > 0)
	{
		z = y % 10;
		sum += z / 5;
	}
	t = z % 5;
	sum += t;
	printf("%d\n", sum);
	return (0);
}
