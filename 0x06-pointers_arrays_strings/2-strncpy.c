#include "main.h"

/**
  * _strncpy - Copies a string to a buffer
  * @dest: copy location
  * @src: pointer to string to be copied
  * @n: int input value
  * Return: Returns the pointer to dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	len = 0;
	while (len < n && *(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	while (len < n)
	{
		*(dest + len) = '\0';
		len++;
	}

	return (dest);
}
