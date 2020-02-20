#include "holberton.h"

/**
 * rev_string- check the code for Holberton School students.
 * @s: the char
 *
 */

void rev_string(char *s)
{
	int i, j = 0;
	char a[500];

	for (i = 0; s[i] != '\0'; i++)
		a[i] = s[i];
	for (i--; i >= 0; i--)
	{
		s[i] = a[j];
		j++;
	}
}
