/*
 * File: 10-print_triangle.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * print_triangle - prints a triangle with a given size
 * @size: holds the size of triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for ((j = size - i); j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
