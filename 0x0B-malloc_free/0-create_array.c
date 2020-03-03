#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - the function
  * @size: the unsigned int
  * @c: the char
  * Return: the char
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0 || c == '\0')
		return (NULL);

	a = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
