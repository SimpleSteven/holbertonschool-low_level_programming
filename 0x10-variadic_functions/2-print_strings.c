#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - the function
  * @separator: the strings
  * @n: the number of arguments
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int counter;
	char *str;

	va_start(strings, n);

	for (counter = 0; counter < n; counter++)
	{
		str = va_arg(strings, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (counter != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
