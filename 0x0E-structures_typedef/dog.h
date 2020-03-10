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

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
