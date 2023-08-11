#include <stdio.h>
/**
 * main - print combination
 *
 * Return: 0 success
 */
int main(void)
{
	int k = 0;

	while (k < 10)
	{
		putchar(48 + k);
		putchar(',');
		putchar(' ');
		k++;
	}
	putchar('\n');
	return (0);
}
