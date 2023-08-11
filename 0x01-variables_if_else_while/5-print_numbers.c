#include <stdio.h>
/**
 * main - print single digit numbers followed by a new line
 *
 * Return: 0 success
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
