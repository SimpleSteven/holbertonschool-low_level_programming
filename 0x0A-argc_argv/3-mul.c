#include <stdio.h>
#include <stdlib.h>

/**
  * main - the fun
  * @argc: the int
  * @argv: the pointer
  * Return: the int
  */

int main(int argc, char *argv[])
{
	if (argc == 3)
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	else
	printf("Error\n");
	return (0);
}
