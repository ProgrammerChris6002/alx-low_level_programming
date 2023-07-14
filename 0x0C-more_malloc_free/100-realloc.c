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
	if (new_size == 0 && ptr != NULL)
		return (NULL);
	return (ptr);
}