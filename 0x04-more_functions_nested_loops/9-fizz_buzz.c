#include <stdio.h>

/**
 * main - writes the character c to stdout
 * Return: always 0
 */

int main(void)
{
	int a, b = 3, c = 5;

	for (a = 1; a <= 100; a++)
	{
		if (a % (b * c) == 0)
			printf("FizzBuzz ");
		else if (a % b == 0)
			printf("Fizz ");
		else if (a % c == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("\n");

	return (0);
}
