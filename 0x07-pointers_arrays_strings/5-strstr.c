#include "holberton.h"

/**
 * _strstr - check the code for Holberton School students.
 * @haystack: the char
 * @needle: the other char
 * Return: the char concatenated
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, f;
	char *r;

	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			r = &haystack[i];
			i++;
			j++;
			f = 1;
			while (needle[j] && f == 1)
			{
				if (haystack[i] == needle[j])
				{
					i++;
					j++;
				}
				else
				{
					j = 0;
					f = 0;
				}
			}
			if (f == 1)
			{
				return (r);
			}
		}
		i++;
	}

	return (0);
}
