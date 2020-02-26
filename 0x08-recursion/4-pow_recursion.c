#include "holberton.h"

/**
 * _pow_recursion - check the code for Holberton School students.
 * @x: the char
 * @y: the other char
 * Return: the char concatenated
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y < 2)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
}
