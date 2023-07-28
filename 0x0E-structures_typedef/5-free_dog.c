#include "dog.h"

/**
  * free_dog - frees dog
  * @d: dog to be freed
  */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
