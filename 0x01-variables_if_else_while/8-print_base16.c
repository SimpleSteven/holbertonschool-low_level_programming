#include <stdio.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int a;
<<<<<<< HEAD
char b;
for (a = 0; a < 10; a++)
putchar(a + '0');
for (b = 'a'; b < 'g'; ++b)
putchar(b);
putchar('\n');
=======
for (a = 0; a < 16; a++)
{
long int q = a, rmd, dn = 0, m, l;
int i = 1, j, tmp;
char s;
for (l = q; l > 0; l = l / 16)
{
tmp = l % 16;
if (tmp < 10)
tmp = tmp + 48; else
tmp = tmp + 55;
dn = dn * 100 + tmp;
}
for (m = dn; m > 0; m = m / 100)
{
s = m % 100;
putchar (tolower(s));
}
}
putchar ('\n');
>>>>>>> 481284446ec0fb61ee0aac2e7266ccfc680145fe
}
