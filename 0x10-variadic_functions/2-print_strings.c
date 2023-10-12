#include "variadic_functions.h"

/**
 * print_strings - prints string arguments
 * @separator: separating string
 * @n: no of args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	char *str;

	if (separator == NULL)
		separator = "";
	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(p, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(p);
}
