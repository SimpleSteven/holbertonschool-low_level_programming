#ifndef DOG_H
#define DOG_H

/**
  * struct dog - the struct
  * @name: the first char pointer
  * @owner: the second char pointer
  * @age: the int
  */
typedef struct dog
{
	char *name, *owner;
	float age;
} dog;

#endif
