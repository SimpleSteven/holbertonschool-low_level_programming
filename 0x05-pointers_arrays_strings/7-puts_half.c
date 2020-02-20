#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 * @str: the char
 *
 */

void puts_half(char *str)
{
	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
		{
		}
	i--;
	k = i;
	if (i % 2 == 1)
		i = (i - 1) / 2;
	else
		i /= 2;
	for (j = 0; j <= k; j++)
		if (j > i)
		_putchar(str[j]);
	_putchar('\n');
}
