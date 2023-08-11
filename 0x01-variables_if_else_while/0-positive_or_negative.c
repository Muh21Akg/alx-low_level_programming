#include <stdio.h>
#include <time.h>
/* main - Entry point */

/* Returns: 0 Always (success) */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MaX /2;
	if(n>0)
		printf("%d is positive", n);
	else if(n=0)
		printf("%d is zero", n);
	else if(n<0)
		printf("%d is negative", n);

	return (0);
}
