#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - check the code for Holberton School students.
 * @s: the char
 * @accept: the other char
 * Return: the char concatenated
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (s[0] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[0] == accept[j])
				return (s);

			j++;
		}
		s++;
	}

	return (NULL);
}
