#include "holberton.h"

/**
 * _strchr- check the code for Holberton School students.
 * @s: the char
 * @c: the other char
 * Return: the char concatenated
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s++;
			return (s);
		}
		s++;
	}
	return (NULL);
}
