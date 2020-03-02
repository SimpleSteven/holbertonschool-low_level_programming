#include "holberton.h"

/**
 * _strcat - check the code for Holberton School students.
 * @dest: the char
 * @src: the other char
 * Return: the char concatenated
 */

char *_strcat(char *dest, char *src)
{
	int a, b, c;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	}
	for (c = 0; c < b; c++)
	{
		dest[a] = src[c];
		a++;
	}

	return (dest);
}
