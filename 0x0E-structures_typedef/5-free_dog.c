#include "dog.h"
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
