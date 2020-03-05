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

	a = calloc(nmemb, size);
	return (a);
}
