#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - the function
  * @separator: the char
  * @n: the int
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list numbers;

	va_start(numbers, n);

	for (count = 0; count < n; count++)
	{
		printf("%i", va_arg(numbers, unsigned int));
		if (count != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
