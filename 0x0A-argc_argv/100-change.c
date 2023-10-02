#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates minimum amount fo coins for change
 * @argc: first argument
 * @argv: second argumen
 * Return: 0 success 1 otherwise
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int rema;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		rema = atoi(argv[1]);
		for (; rema >= 25; rema -= 25)
		{
			sum++;
		}
		for (; rema >= 10; rema -= 10)
		{
			sum++;
		}
		for (; rema >= 5; rema -= 5)
		{
			sum++;
		}
		for (; rema >= 2; rema -= 2)
		{
			sum++;
		}
		for (; rema >= 1; rema -= 1)
		{
			sum++;
		}
		printf("%d\n", sum);
		return (0);
	}
}
