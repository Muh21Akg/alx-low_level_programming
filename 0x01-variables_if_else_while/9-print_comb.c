#include <stdio.h>
/**
 * main - print combination
 *
 * Return: 0 success
 */
int main(void)
{
	int k = 0;

	while (k <= 9)
	{
		putchar(48 + k);
		if (k != 9)
		{
			putchar(',');
			putchar(' ');
		}
		++k;
	}
	putchar('\n');
	return (0);
}
