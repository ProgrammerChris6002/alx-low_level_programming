#include "main.h"

/**
  *_memcpy - copies n bytes from mem area src to mem area dest
  * @dest: copy location
  * @src: mem area to be copied
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
