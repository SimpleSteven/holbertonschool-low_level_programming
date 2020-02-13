#include "holberton.h"

/**
 * more_numbers - writes the character c to stdout
 */

void more_numbers(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 2; b++)
		{
			for (c = 0; c <= 9; c++)
			{
				if (b == 1)
				_putchar(b + '0');
				_putchar(c + '0');
				if (b == 1 && c == 4)
				{
					b = 3;
					c = 10;
				}
			}
		}
		_putchar('\n');
	}
}
