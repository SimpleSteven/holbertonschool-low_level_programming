#include "holberton.h"

/**
 * *_strcpy - check the code for Holberton School students.
 * @dest: the char
 * @src: the other char
 * Return: the dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];
	return (dest);
}
