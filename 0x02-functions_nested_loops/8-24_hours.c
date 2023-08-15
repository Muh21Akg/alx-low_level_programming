/*
 * File: 8-24_hours.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * jack_bauer - prints minutes of the day of jack bauer from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hr, mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
		}
	}
}
