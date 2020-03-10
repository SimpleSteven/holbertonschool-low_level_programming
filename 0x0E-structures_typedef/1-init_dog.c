#include <stdio.h>
#include "dog.h"
/**
  * init_dog - the function
  * @d: the first pointer
  * @name: the second pointer
  * @age: the float
  * @owner: the third pointer
  */



void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
