#include <stdio.h>

/**
  * main - the funtcion
  * @argc: the int
  * @argv: the char
  * Return: the int
  */


int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
}
