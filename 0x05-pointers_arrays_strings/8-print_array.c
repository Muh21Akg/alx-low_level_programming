#include <stdio.h>

/**
 * print_array - prints an array
 * @a: holds the array address
 * @n: holds the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
