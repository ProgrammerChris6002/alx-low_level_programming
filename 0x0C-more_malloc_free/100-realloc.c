#include "main.h"

/**
  * _realloc -  reallocates a memory block
  * @ptr: pointer to string
  * @old_size: prev size param
  * @new_size: new size param
  * Return: pointer to the newly created array
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size, i;
	char *source, *dest;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	min_size = (old_size < new_size) ? old_size : new_size;
	source = (char *)ptr;
	dest = (char *)new_ptr;

	for (i = 0; i < min_size; i++)
		dest[i] = source[i];
	free(ptr);

	return (new_ptr);
}
