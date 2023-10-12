#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct func - structure named func with two elements
 * @typ: type of data to be processed
 * @fun: points to the proper fuction
 *
 */
typedef struct func
{
	char *typ;
	void (*fun)(va_list arg);
} func;
#endif
