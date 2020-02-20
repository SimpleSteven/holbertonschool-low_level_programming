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
	int a, b, c;
	int ar[98];

	for (a = 0; dest[a] != '\0'; a++)
		ar[a] = dest[a];

	for (b = 0; b < n; b++)
		dest[b] = src[b];
	a = 0;
	for (c = n + 1; c < 98 - n; c++)
	{
		dest[c] = ar[a];
		a++;
	}

	return (dest);
}
