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
	unsigned int count, lenght;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	lenght = nmemb * size;
	a = malloc(lenght);
	if (a == NULL)
		return (NULL);
	for (count = 0; count < lenght; count++)
		a[count] = 0;
	return (a);
}
