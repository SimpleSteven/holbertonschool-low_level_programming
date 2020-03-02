#include "holberton.h"

/**
 * _memset - check the code for Holberton School students.
 * @s: the char
 * @b: the other char
 * @n: the int
 * Return: the char concatenated
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
