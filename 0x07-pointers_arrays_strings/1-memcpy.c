#include "holberton.h"

/**
 * _memcpy - check the code for Holberton School students.
 * @dest: the char
 * @src: the other char
 * @n: the int
 * Return: the char concatenated
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
