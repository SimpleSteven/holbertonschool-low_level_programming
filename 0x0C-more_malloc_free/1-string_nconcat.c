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
	unsigned int count = 0, count2 = 0, con = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[count]; count++)
	{
	}
	for (; s2[count2] && count < n; count2++)
	{
	}
	a = malloc(sizeof(char) * count + count2 + 1);
	if (a == NULL)
		return (NULL);
	con = 0;
	count = 0;
	count2 = 0;
	while (con != 2)
	{
		if (s1[count] != '\0' && con == 0)
		{
			a[count] = s1[count];
			count++;
		}
		else
			con = 1;
		if (con == 1 && s2[count2] != '\0' && count2 < n)
		{
			a[count] = s2[count2];
			count++;
			count2++;
		}
		else if (con == 1)
			con = 2;
	}
	a[count] = '\0';
	return (a);
}
