#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - the function
  * @nmemb: the int
  * @size: the unsigned int
  * Return: the pointer
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (count = 0; count < nmemb * size; count++)
		a[count] = '0';
	return (a);
}
