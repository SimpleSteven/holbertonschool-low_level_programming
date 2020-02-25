#include "holberton.h"

/**
 *  print_diagsums- check the code for Holberton School students.
 * @a: the char
 * @size: the other char
 * Return: the char concatenated
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0, l = 0, k = (size * (size - 1));

	for (i = 0; i < size * size; i = i + size + 1, k = k - size + 1)
	{
		j += *(a + i);
		l += *(a + k);
	}
	printf("%i, %i\n", j, l);

}
