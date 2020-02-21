#include "holberton.h"

/**
 * reverse_array - check the code for Holberton School students.
 * @a: the other int
 * @n: the int
 */

void reverse_array(int *a, int n)
{
	int i, c;
	int b[13];

	for (i = 0; i < n; i++)
		b[i] = a[i];
	i--;
	for (c = 0; c < n; c++)
	{
		a[c] = b[i];
		i--;
	}
}
