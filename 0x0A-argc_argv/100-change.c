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
	int i, j = 0, value = atoi(argv[1]);
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (value < 0)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (value == 0)
				break;
			if (value >= cents[i])
			{
				j += value / cents[i];
				value = value % cents[i];
			}
		}
	}
	printf("%i\n", j);

	return (0);
}
