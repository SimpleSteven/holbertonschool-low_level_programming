#include <stdio.h>
#include <stdlib.h>

/**
  * _strdup - the function
  * @str: the char
  * Return: the char
  */

char *_strdup(char *str)
{
	int i;
	char *a;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	a = malloc(sizeof(char) * i);
	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}

	return (a);
}
