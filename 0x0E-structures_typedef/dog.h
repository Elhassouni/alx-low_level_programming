#ifndef DOG_H
#define DOG_H

/**
  * struct dog- define a new type struct dog with name age and owner
  *
  * @name: first member is a string
  * @age: second member is an int
  * @owner: third member is a string
  *
  * Description: defining new type of struct takes three variables
  * and will be initialized on main function.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
