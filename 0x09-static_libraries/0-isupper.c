#include <unistd.h>
#include "holberton.h"

/**
 * _isupper - writes the character c to stdout
 * @c: the char
 * Return: return 1 if is uppercase and 0 if isnt
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		c = 1;
	else
	c = 0;
	return (c);
}
