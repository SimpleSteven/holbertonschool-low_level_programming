#include "holberton.h"

/**
 * leet - check the code for Holberton School students.
 * @c: the char
 * Return: the char concatenated
 */

char *leet(char *c)
{
	int i, z;
	char a[] = "aAeEoOtTlL";
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; c[i] != '\0'; i++)
		for (z = 0; a[z] != '\0'; z++)
			if (c[i] == a[z])
				c[i] = b[z];

	return (c);
}
