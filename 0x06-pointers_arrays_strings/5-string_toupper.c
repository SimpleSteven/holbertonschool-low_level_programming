#include "holberton.h"

/**
 * string_toupper - check the code for Holberton School students.
 * @c: the char
 * Return: the char concatenated
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		if (c[i] > 96 && c[i] < 123)
			c[i] -= 32;

	return (c);
}
