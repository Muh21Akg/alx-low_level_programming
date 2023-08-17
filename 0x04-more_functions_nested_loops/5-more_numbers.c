/*
 * File: 5-more_numbers.c
 * Auth: Muhammad A Abdurrahman
 */

#imclude "main.h"

/**
 * more_numbers - prints (0 through 14) ten times
 */
void more_numbers(void)
{
	int x;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
			if (x > 9)
			{
				_putchar((x / 10) + '0')
			}
		_putchar((x % 10) + '0');
		putchar('\n');
	}
}
