#include "holberton.h"

/**
 * is_palindrome - check the code for Holberton School students.
 * @s: the char
 * @cnt: the counter
 * Return: the char concatenated
 */

int length(char *s, int cnt);
int palindrome(char *s, int cnt, int opposite_lenght);

int is_palindrome(char *s)
{
	int cnt = 0;

	return (length(s, cnt));
}

/**
  * length -the other function
  * @s: the char
  * @cnt: the counter
  * Return: the int
  */

int length(char *s, int cnt)
{
	int opposite_lenght = 0;

	if (s[cnt] != '\0')
		return (length(s, cnt + 1));

	return (palindrome(s, cnt - 1, opposite_lenght));
}

/**
  * palindrome - the comparison
  * @s: the array
  * @cnt: the counter
  * @opposite_lenght: the other counter
  * Return: the int
  */

int palindrome(char *s, int cnt, int opposite_lenght)
{
	if (s[opposite_lenght] == '\0')
	{
		return (1);
	}
	else if (s[cnt] == s[opposite_lenght])
	{
		cnt--;
		opposite_lenght++;
		return (palindrome(s, cnt, opposite_lenght));
	}
	return (0);
}
