#include <stdlib.h>
#include <stdio.h>

/**
 * mqin - prints no of arguments
 * @argc: first argument
 * @argv: second argument
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	argv++;
	printf("%d\n", argc);
	return (0);
}
