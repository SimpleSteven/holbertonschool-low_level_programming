#include <stdarg.h>

/**
  * sum_them_all - the function
  * @n: the unsigned int
  * Return: the sum of all the ints
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int count, sum = 0;

	va_start(args, n);
	for (count = 0; count < n; count++)
		sum += va_arg(args, unsigned int);
	va_end(args);
	return (sum);
}
