#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
  * string_nconcat - the function
  * @s1: the char
  * @s2: the other char
  * @n: the int
  * Return: the char
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int count = 0, count2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[count]; count++)
	{
	}
	for (; s2[count2] && count2 < n; count2++)
	{
	}
	a = malloc(sizeof(char) * count + count2 + 1);
	if (a == NULL)
		return (NULL);
	for (count = 0; s1[count]; count++)
		a[count] = s1[count];
	for (count2 = 0; s2[count2] && count2 < n; count2++, count++)
		a[count] = s2[count2];
	a[count] = '\0';
	return (a);
}
