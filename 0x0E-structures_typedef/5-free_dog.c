#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - This function frees dogs
 * @d: The poiter to an instance of struct dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
