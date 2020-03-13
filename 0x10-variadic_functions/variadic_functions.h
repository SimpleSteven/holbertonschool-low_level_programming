#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct op
{
	char type;
	void (*f)(va_list args);
} op_s;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void _char(va_list args);

void _int(va_list args);

void _float(va_list args);

void _string(va_list args);

#endif
