#include "holberton.h"

/**
 * _strcmp - check the code for Holberton School students.
 * @s1: the char
 * @s2: the other char
 * Return: the char concatenated
 */

int _strcmp(char *s1, char *s2)
{
	int i, a;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			a =s1[i] - s2[i];
			return (a);
		}

	}
	return (0);
}
