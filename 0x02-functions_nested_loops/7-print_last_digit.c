/*
 * File: 7-print_last_digit.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of a given number
 * @y: is the number to be processed
 * Return: the value of the last digit
 */
int print_last_digit(int y)
{
	int x = y % 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');

	return (x);
}
