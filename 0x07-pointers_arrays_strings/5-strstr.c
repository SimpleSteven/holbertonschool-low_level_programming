#include "holberton.h"

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: the char
 * @needle: the other char
 * Return: the char concatenated
 */

char *_strstr(char *haystack, char *needle)
{
	int j = 0;

	if (!*needle)
		return (haystack);
	for (; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			needle++, j++;
		}
		else
		{
			needle = needle - j;
			j = 0;
		}
		if (!*needle)
		{
			haystack = haystack - j + 1;
			return (haystack);
		}
	}

	return (0);
}
