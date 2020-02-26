#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 * @s: the char
 * Return: the char concatenated
 */

void _puts_recursion(char *s)
{
	if (!s[0])
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		s++;
		_puts_recursion(s);
	}
}
