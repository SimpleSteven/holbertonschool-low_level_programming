#include <stdio.h>
#include <stdlib.h>

/**
  * strtow - the function
  * @str: the char
  * Return: the char
  */

char **strtow(char *str)
{
	char *a;
	int count = 0;
	printf("%s\n", str);

	while (str[count] != '\0')
	{
		if (str[count] != ' ')
		{
			a = &str[count];
			break;
		}
		count++;
	}
	printf("%s\n", a);
	return (NULL);
}
