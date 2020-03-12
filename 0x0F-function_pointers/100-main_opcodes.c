#include <stdio.h>
#include <stdlib.h>

/**
  * main - the function
  * @argc: the counter
  * @argv: the strings
  * Return: the int
  */

int main(int argc, char *argv[])
{
	unsigned char *temp;
	int count, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 1)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < argv[1][i] != '\0'; i++)
	{
		printf("Error\n");
		exit(1);
	}
	temp = (unsigned char *)&main;
	for (count = 0; count < atoi(argv[1]) - 1; count++)
	{
		printf("%02hhX ", temp[count]);
	}
	printf("%02hhX\n", temp[count]);
	return (0);
}
