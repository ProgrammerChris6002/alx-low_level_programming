#include "main.h"

/**
  * create_array - creates an array of chars
  * @size: number of chars
  * @c: char param
  * Return: pointer to char if all goes well else NULL
  */

char *create_array(unsigned int size, char __attribute((unused)) c)
{
	char *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
