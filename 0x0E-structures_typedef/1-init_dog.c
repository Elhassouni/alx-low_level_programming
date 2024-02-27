#include "dog_h"

/**
  * init_dog - Write a function that initialize a variable of type struct dog.
  *
  * @d: pointer struct
  * @name: string name
  * @age: int age
  * @owner: string owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
