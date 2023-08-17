/*
 * File: 5-more_numbers.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * more_numbers - prints (0 through 14) ten times
 */
void more_numbers(void)
{
	int n1, n2; 

	for (n1 = 0; n1 < 10; n1++)
	{
		for (number2 = 0; number2 <= 14; number2++)
		{
			if (number2 > 9)
			{
				_putchar((number2 / 10) + '0');
			}
			_putchar((number2 % 10) + '0');
		}
		_putchar(10);
	}
}
