#include <stdio.h>
/**
  * print_name - the function
  * @name: the char
  * @f: the other function
  */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
