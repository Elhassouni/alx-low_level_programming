#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
  * struct dog - Define a new type dog_t as a new name for the type struct dog.
  *
  * @name: first member is a string
  * @age: second member is an int
  * @owner: third member is a string
  *
  * Description: defining new type of struct takes three variables
  * and will be initialized on main function.
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _strlen(char *s);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *ptr);
#endif
