#include "holberton.h"
#include <stdio.h>

/**
 * _strchr- check the code for Holberton School students.
 * @s: the char
 * @c: the other char
 * Return: the char concatenated
 */

char *_strchr(char *s, char c)
{

	while (s[0] != '\0' && s[0] != c)
	{
		s++;
	}
		if (s[0] == c)
			return (s);

	return (0);
}
