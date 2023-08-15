#include <stdio.h>
/**
 * main - print alphabet
 *
 * Return: 0 success
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
/**
 *  print_alphabet: prints alphabet followed by a new line
 */
void print_alphabet(void)
{
	char x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
}
