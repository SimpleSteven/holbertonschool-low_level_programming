#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

char *_strdup(char *str);

/**
  * new_dog - the function
  * @name: the char pointer
  * @age: the int
  * @owner: the other char pointer
  * Return: the new struct
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (owner == NULL || name == NULL)
		return (NULL);
	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	return (new_dog);
}

/**
  * _strdup - the function
  * @str: the char
  * Return: the char
  */

char *_strdup(char *str)
{
	int i, j;
	char *a;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	i++;
	a = malloc(sizeof(char) * i);
	if (a == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		a[j] = str[j];
	}

	return (a);
}
