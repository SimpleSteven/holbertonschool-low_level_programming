#include <unistd.h>
#include "holberton.h"

/**
 * print_square - writes the character c to stdout
 * @size: the size
 */

void print_square(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}

		_putchar('\n');
	}
}
