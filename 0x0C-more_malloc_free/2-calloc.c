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
	void *a;
	
	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	return (a);
}
