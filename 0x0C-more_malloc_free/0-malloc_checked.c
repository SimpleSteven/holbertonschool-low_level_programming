#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
  * malloc_checked - the function
  * @b: the unsigned int
  * Return: the pointer
  */

void *malloc_checked(unsigned int b)
{
	int *ar;

	ar = malloc(b);
	if (ar == NULL)
		exit (98);
	return (ar);
}
