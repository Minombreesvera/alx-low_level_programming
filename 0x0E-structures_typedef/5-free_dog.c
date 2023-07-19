#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: the dog tto be freed
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->owner);
	free(d);
}
