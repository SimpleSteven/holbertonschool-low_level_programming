#include <stdio.h>
#include <stdlib.h>

/**
  * array_range - the function
  * @min: the int
  * @max: the other int
  * Return: the pointer
  */

int *array_range(int min, int max)
{
	int *a;
	int lenght, count;

	if (min > max)
		return (NULL);
	lenght = max - min;
	a = malloc(sizeof(int) * lenght);
	if (a == NULL)
		return (NULL);
	for (count = 0; count < lenght; count++, min++)
		a[count] = min;
	return (a);
}
