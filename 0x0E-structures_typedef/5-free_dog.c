#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function to free instances of dog
 * @d: instace of dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
