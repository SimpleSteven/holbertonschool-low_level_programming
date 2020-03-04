#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - the function
 * @width: the int
 * @height: the other int
 * Return: the int
 */

int **alloc_grid(int width, int height)
{
	int i, j, k;
	int **a;

	if (width < 1 || height < 1)
		return (NULL);
	a = malloc(sizeof(int) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int *) * width);
		if (!a[i])
		{
			for (j = 0; j < i; j++)
				free(a[j]);
			free(a);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
	for (i = 0; i < width; i++)
		a[k][i] = 0;
	}
	return (a);
}
