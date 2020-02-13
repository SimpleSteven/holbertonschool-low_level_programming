#include <unistd.h>
#include "holberton.h"

/**
 * print_line - writes the character c to stdout
 * @n: int
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	for (a = 0; a <= n; a++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
