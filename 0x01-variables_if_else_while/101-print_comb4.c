#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m;
	int n = '1';
	int o = '2';

	for (m = '0' ; m <= '9' ; m++)
		for (n = m + 1 ; n <= '9' ; n++)
			for (o = n + 1 ; o <= '9' ; o++)
				{
				putchar(m);
				putchar(n);
				putchar(o);
				if ((m == '7') && (n == '8') && (o == '9'))
					continue;
				putchar(',');
				putchar(' ');
				}
	putchar('\n');
	return (0);
}
}
