#include "holberton.h"

/**
 * _strchr- check the code for Holberton School students.
 * @s: the char
 * @c: the other char
 * Return: the char concatenated
 */

char *_strchr(char *s, char c)
{

	while (s[0] != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
