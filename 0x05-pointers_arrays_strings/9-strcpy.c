#include "main.h"

/**
  * _strcpy - Copies a string to a buffer
  * @dest: copy location
  * @src: pointer to string to be copied
  * Return: Returns the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\0';

	return (dest);
}
