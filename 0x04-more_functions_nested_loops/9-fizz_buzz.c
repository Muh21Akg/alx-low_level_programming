/*
 * File: 9-fizz_buzz.c
 * Auth: Muhammad A Abdurrahman
 */

#include <stdio.h>
#include "main.h"

/**
 * main - fizz buzz (1 through 100)
 *Return: 0 success
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
			printf("FizzBuzz ");

		else if ((num % 3) == 0)
			printf("Fizz ");

		else if ((num % 5) == 0)
		{
			if (num != 100)
				printf("Buzz ");

			else
				printf("Buzz");
		}
		else
			printf("%d ", num);
	}
	printf("\n");
	return (0);
}
