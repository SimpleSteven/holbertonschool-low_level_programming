#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - the function
  * @ptr: the pointer
  * @old_size: the unsigned int
  * @new_size: the other unsigned int
  * Return: the pointer
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size || ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	return (ptr);
}
