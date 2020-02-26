#include "holberton.h"

/**
 * _sqrt_recursion - check the code for Holberton School students.
 * @n: the int
 * @cnt: the other int
 * Return: the char concatenated
 */

int square_root(int cnt, int n);

int _sqrt_recursion(int n)
{
	int cnt = 1;

	return (square_root(cnt, n));
}

/**
  * square_root - the other funtcion
  * @cnt: the counter
  * @n: the root
  * Return: the int
 */

int square_root(int cnt, int n)
{
	if (n < 0 || cnt * cnt > n)
	{
		return (-1);
	}
	else if (cnt * cnt == n)
	{
		return (cnt);
	}
	else if (n > 1)
	{
		return (square_root(cnt + 1, n));
	}
	return (0);
}
