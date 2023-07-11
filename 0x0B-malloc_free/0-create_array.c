#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: number of chars
  * @c: char param
  * Return: pointer to char if all goes well else NULL
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(c));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
