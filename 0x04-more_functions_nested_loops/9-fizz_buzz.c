#include <stdio.h>
#include "holberton.h"

/**
 * main - writes the character c to stdout
 * Return: always 0
 */

int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 15 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("\n");

	return (0);
}
