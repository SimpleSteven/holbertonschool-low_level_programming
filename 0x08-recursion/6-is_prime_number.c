#include "holberton.h"

/**
 * is_prime_number - check the code for Holberton School students.
 * @n: the int
 * Return: the char concatenated
 */

int prime(int cnt, int n);

int is_prime_number(int n)
{
	int cnt = 1;

	return (prime(cnt, n));
}


/**
  * prime - the other function
  * @n: the int
  * @cnt: the other int
  * Return: the int
  */


int prime(int cnt, int n)
{

	if (n < 2 || cnt * cnt == n)
	{
		return (0);
	}
	else if (cnt * cnt > n)
	{
		return (1);
	}
	else
	{
		return (prime(cnt + 1, n));
	}
	return (0);
}
