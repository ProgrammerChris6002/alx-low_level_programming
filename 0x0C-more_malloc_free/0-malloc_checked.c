#include "main.h"

/**
  * malloc_checked - allocates memory
  * @b: amount to allocate
  * Return: returns a pointer to the allocated memory
  */

void *malloc_checked(unsigned int b)
{
	char * array;

	array = malloc(b);
	if (array == NULL)
		exit(98);

	return (array);
}
