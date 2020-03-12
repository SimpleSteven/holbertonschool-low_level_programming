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
	int count;

	if (argc != 2)
	{
		printf("Error");
		exit(1);
	}
	if (atoi(argv[1]) < 1)
	{
		printf("Error");
		exit(2);
	}
	temp = (unsigned char *)&main;
	for (count = 0; count < atoi(argv[1]) - 1; count++)
		printf("%x ", temp[count]);
	printf("%x\n", temp[count]);

	return (0);
}
