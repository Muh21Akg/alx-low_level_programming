/*
 * File: 6-abs.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * _abs - prints the absolute value of a given number
 * @x: is the number to be processed
 * Return: x success
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return ((-1) * x);
}
