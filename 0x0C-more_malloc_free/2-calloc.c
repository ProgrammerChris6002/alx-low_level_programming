#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: element to be initialized in array
  * @size: array size
  * Return: returns a pointer to the allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = nmemb;

	return (array);
}
