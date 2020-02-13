#include <unistd.h>
#include "holberton.h"

/**
 * _isupper - writes the character c to stdout
 * @c: the char
 */

int _isupper(int c)
{
	int c;
	if (c > 64 && c < 91)
	c = 1;
	else
	c = 0;
	return (c);
}
