#include "holberton.h"

/**
 * _strncpy - check the code for Holberton School students.
 * @dest: the char
 * @src: the other char
 * @n: the int
 * Return: the char concatenated
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];

	for (; a < n; a++)
		dest[a] = '\0';

	return (dest);
}
