#include "holberton.h"

/**
 * swap_int - check the code for Holberton School students.
 * @a: int a
 * @b: intb
 *
 */

void swap_int(int *a, int *b)
{
	int c = *a, d = *b;

	*a = d;
	*b = c;
}
