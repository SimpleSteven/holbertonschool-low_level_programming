#include "holberton.h"

/**
 * factorial - check the code for Holberton School students.
 * @n: the char
 * Return: the char concatenated
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n < 2)
	{
		return (n);
	}
	else
	{
		return (n = n * factorial(n - 1));
	}
}
