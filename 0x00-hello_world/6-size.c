#include<stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	double d;

	printf("the size ofinteger is %lu.\n", (unsigned long)sizeof(i));
	printf("the size of double is %lu.\n", (unsigned long)sizeof(d));

	return(0);
}
