#include "variadic_functions.h"
/**
 * _char - prints a character
 * @arg: argunment
 */
void _char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
/**
 * _int - prints an integer
 * @arg: argument
 */
void _int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
/**
 * _float - prints a float
 * @arg: argument
 */
void _float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
/**
 * _str - prints a string
 * @arg: argument
 */
void _str(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);
	if (!string)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
/**
 * print_all - prints all given arguments
 * @format: format to be printed
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	func _types[] = {
		{"c", _char},
		{"d", _int},
		{"f", _float},
		{"s", _str},
	};
	va_start(arg, format);
	while (*(format + i) && format)
	{
		while (j < 4)
		{
			if (_types[j].typ[0] == format[i])
			{
				_types[j].fun(arg);
				printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
