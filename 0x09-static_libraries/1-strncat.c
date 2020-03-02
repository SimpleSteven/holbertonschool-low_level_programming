#include "holberton.h"

/**
 * _strncat - check the code for Holberton School students.
 * @dest: the char
 * @src: the other char
 * @n: the int
 * Return: the char concatenated
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, c;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	}
	for (c = 0; c < n; c++)
	{
		dest[a] = src[c];
		a++;
	}

	return (dest);
}
