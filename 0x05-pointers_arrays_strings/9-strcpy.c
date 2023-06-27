#include <stdio.h>

/**
  * _strcpy - Copies a string to a buffer
  * @dest: copy location
  * @src: pointer to string to be copied
  * Return: Returns the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	char *destp;

	*dest = *src;
	destp = &dest;

	return (destp);
}
