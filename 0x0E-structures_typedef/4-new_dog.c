#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  * Return: NULL if functiion fails
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
		return (NULL);

	new_dog_ptr->name = strdup(name);
	if (new_dog_ptr->name == NULL)
		return (NULL);

	new_dog_ptr->owner = strdup(owner);
	if (new_dog_ptr->owner == NULL)
		return (NULL);

	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
