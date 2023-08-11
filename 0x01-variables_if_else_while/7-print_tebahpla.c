#include <stdio.h>
/**
 * main - print alphabet in reverse
 *
 * Return: 0 success
 */
int main(void)
{
	char x = 'z';

	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
