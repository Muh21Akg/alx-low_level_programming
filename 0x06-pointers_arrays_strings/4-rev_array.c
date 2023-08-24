/*
 * File: 4-rev_array.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * reverse_array - reverses a given array
 * @a: points to the target array
 * @n: hods the length
 */
void reverse_array(int *a, int n)
{
	int i;
	int m = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[m];
		a[i] = end;
		a[m] = start;
		m--;
	}
}
