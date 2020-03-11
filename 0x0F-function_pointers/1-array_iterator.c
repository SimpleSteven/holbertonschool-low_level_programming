#include <stdio.h>

/**
  * array_iterator - the function
  * @array: the char pointer
  * @size: the construct
  * @action: the function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	for (count = 0; count < size; count++)
		action(array[count]);
}
