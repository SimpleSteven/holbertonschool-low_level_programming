#include "holberton.h"

/**
 * _atoi - check the code for Holberton School students.
 * @s: the char
 * Return: the float;
 */

int _atoi(char *s)
{
	float a;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i--] > 47 && s[i] < 58) && (s[i] < 48 && s[i] > 57))
				break;
		if (s[i] > 47 && s[i] < 58)
		{
			a = s[i];
		}
	}

	return (a);
}
