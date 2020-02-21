#include "holberton.h"

/**
 * rot13 - check the code for Holberton School students.
 * @c: the char
 * Return: the char concatenated
 */

char *rot13(char *c)
{
	int i, z;
	char a[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char b[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; c[i] != '\0'; i++)
		for (z = 0; a[z] != '\0'; z++)
			if (c[i] == a[z])
				c[i] = b[z];

	return (c);
}
