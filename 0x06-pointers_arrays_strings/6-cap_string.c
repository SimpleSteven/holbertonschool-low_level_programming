#include "holberton.h"

/**
 * cap_string - check the code for Holberton School students.
 * @c: the char
 * Return: the char concatenated
 */

char *cap_string(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
		if ((i == 0) || c[i - 1] == ',' || c[i - 1]  == ';' || c[i - 1] == '.' ||
		c[i - 1] == '!' || c[i - 1] == '?' ||
		c[i - 1] == '"' || c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{' ||
		c[i - 1] == '}' || c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n')
		{
			if (c[i] > 96 && c[i] < 123)
				c[i] -= 32;
		}
	return (c);
}
