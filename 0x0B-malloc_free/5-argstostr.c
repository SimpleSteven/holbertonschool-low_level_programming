#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - the function
  * @ac: the int
  * @av: the char
  * Return: the char
  */

char *argstostr(int ac, char **av)
{
	int count, count2, mallocount = 0;
	char *a;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (count = 0; count < ac; count++)
	{
		for (count2 = 0; av[count][count2] != '\0'; count2++, mallocount++)
		{
		}
		mallocount++;
	}
	a = malloc(sizeof(char) * mallocount + 1);
	if (a == NULL)
		return (NULL);
	for (count = 0, mallocount = 0; count < ac; count++)
	{
		for (count2 = 0; av[count][count2] != '\0'; count2++, mallocount++)
		{
			a[mallocount] = av[count][count2];
		}
		if (count == ac - 1)
		{
			a[mallocount] = '\n';
			mallocount++;
			a[mallocount] = '\0';
		}
		else
		{
			a[mallocount] = '\n';
			mallocount++;
		}
	}
	return (a);
}
