#include "holberton.h"

/**
 * _strlen_recursion - check the code for Holberton School students.
 * @s: the char
 * Return: the int
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		i++;
		return (i + _strlen_recursion(s));
	}
}
