#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
  * main - the function
  * @argc: the counter
  * @argv: the vectors
  * Return: the int
  */

int main(int argc, char *argv[])
{
	int i, a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else if ((argv[2][0] != '+' && argv[2][0] != '*' && argv[2][0] != '-'
		&& argv[2][0] != '/' && argv[2][0] != '%') || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	else if ((argv[2][0] == '/' ||
		argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	i = get_op_func(argv[2])(a, b);
	printf("%i\n", i);
	return (0);
}
