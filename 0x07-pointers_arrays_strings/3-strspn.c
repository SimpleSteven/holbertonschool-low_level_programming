#include "holberton.h"

/**
 * _strspn - check the code for Holberton School students.
 * @s: the char
 * @accept: the int
 * Return: the char concatenated
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{	
				a++;
			}
		}
	}
	return (a);
}
