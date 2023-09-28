#include "main.h"

/**
 * _pow_recursion - calculates power of number
 * @x: number
 * @y: power
 * Return: processed number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, --y));
}
