/*
 * File: 1-swap.c
 * Auth: Muhammad A Abdurrahman
 */

#include "main.h"

/**
 * swap_int - swaps the value of two variables
 * @a: 1st var
 * @b: 2nd var
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
