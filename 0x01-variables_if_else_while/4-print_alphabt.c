#include <stdio.h>
/**
 * main - print lowercase chars ignoring q and e
 *
 * return: o success
 */
int main(void)
{
	char x = 'a';

	while (x <= 'z')
	{
		if (x == 'q' || x == 'e')
			goto k;
		putchar(x);
k: x++;
   	}
	putchar('\n');
	return(0);
}
