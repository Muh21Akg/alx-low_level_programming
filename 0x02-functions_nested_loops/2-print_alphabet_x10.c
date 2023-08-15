#include <stdio.h>
/**
 * main - print alphabet ten times
 *
 * Return: 0 succtss
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}
/* print_alphabet_x10: print alphabet 10 times*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		char x = 'a';
		while (x <= 'z')
		{
			putchar(x);
			x++;
		}
		putchar('\n');
	}
}
