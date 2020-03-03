#include <stdlib.h>
#include <stdio.h>

/**
  * str_concat - the function
  * @s1: the first char
  * @s2: the second char
  * Return: the char
  */

char *str_concat(char *s1, char *s2)
{
	int l1, l2, i, j;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}
	a = malloc(sizeof(char) * (i + j) + 1);
	if (a == NULL)
		return (NULL);

	for (l1 = 0; l1 < i; l1++)
	a[l1] = s1[l1];

	for (l2 = 0; l2 < j; l2++, l1++)
		a[l1] = s2[l2];
	a[l1] = '\0';
	return (a);
}
