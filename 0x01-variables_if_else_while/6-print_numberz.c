#include <stdio.h>
/**
 * main - print single digit numbers using putchar
 *
 * Return: 0 success
 */
int main(void)
{
	int x = 0;

	while(x < 10)
	{
		putchar(48 + x);
		x++;
	}
	putchar('\n');
	return (0);
}
