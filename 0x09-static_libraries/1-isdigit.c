#include <unistd.h>
#include "holberton.h"

/**
 * _isdigit - writes the character c to stdout
 * @c: the char
 * Return: return 1 if is uppercase and 0 if isnt
 */

int _isdigit(int c)
{
	if (c > 47  && c < 58)
		c = 1;
	else
	c = 0;
	return (c);
}
