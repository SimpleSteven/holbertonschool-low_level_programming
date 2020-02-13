#include <unistd.h>
#include "holberton.h"

/**
 * print_diagonal - writes the character c to stdout
 * @n: int
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	for (a = 0; a < n ; a++)
	{
		for (b = 0; b < a; b++)
		_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	else
	_putchar('\n');
}
