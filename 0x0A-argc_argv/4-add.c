#include <stdio.h>
#include <stdlib.h>

/**
  * main - the function
  * @argc: the int
  * @argv: the char
  * Return: the int
  */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
