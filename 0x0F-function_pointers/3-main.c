#include "3-calc.h"

/**
 * main - performs an operation on two main arguments
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int x, y;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op(x, y));
	return (0);
}
