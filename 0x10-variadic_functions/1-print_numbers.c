#include "variadic_functions.h"

/**
 * print_numbers - prints its arguments
 * @separator: separating string
 * @n: no of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;

	if (separator == NULL)
		separator = "";
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
