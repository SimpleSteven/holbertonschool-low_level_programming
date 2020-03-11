#include <stdio.h>

/**
  * int_index - the function
  * @array: the pointer
  * @size: the int
  * @cmp: the other function
  * Return: the int
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int count, index;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	for (count = 0; count < size; count++)
	{
		index = (*cmp)(array[count]);
		if (index == 1)
			return (count);
	}
	return (-1);
}
