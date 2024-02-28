#include "dog.h"

/**
  * new_dog - a function that creates a new dog
  *
  * @name: name of dog
  * @age: age of dog
  * @owner: dog owner
  *
  * Return: struct pointer to dog
  *         NULL in case the function fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;
	int length1 = 0;
	int length2 = 0;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	length1 = _strlen(name);

	ptr->name = malloc((sizeof(char) * length1) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < length1; i++)
		ptr->name[i] = name[i];
	ptr->name[length1] = '\0';
	length2 = _strlen(owner);
	ptr->owner = malloc((sizeof(char) * length2) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	for (j = 0; j < length2; j++)
		ptr->owner[j] = owner[j];
	ptr->owner[length2] = '\0';
	ptr->age = age;
	return (ptr);
}
/**
  * free_dog - Frees memory allocated for a dog structure.
  *
  * @ptr: Pointer to the dog structure to be freed.
  *
  * Description: Frees the memory allocated for the name, owner, and the
  *              dog structure itself. It checks if the pointer is NULL
  *              before attempting to free the memory.
  */
void free_dog(dog_t *ptr)
{
	if (ptr == NULL)
		return;  /* No need to free anything if the pointer is NULL*/
	free(ptr->name);
	free(ptr->owner);
	free(ptr);
}
/**
  * _strlen - a function that gets a length of string
  *
  * @s: the string to get the length
  *
  * Return: length of @str
  */
int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	
	return (length);
}
