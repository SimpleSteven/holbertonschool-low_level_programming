#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - the function
  * @str: the char
  * Return: the char
  */

char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	a = malloc(sizeof(char) * i);
	if (a == NULL)
		return (NULL);
	for (j = 0; str[j] < i; j++)
	{
		a[j] = str[j];
	}

	return (a);
}
