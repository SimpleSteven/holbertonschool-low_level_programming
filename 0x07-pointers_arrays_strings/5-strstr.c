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

	for (; *haystack && *needle; haystack++)
	{
		if (*haystack == *needle)
		{
			needle++, j++;
		}
		else
		{
			if (j > 0)
				needle = needle - 1;
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
