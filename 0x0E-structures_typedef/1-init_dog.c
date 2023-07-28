#include "dog.h"

/**
  * init_dog - initializes a dog
  * @d: param 1
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
