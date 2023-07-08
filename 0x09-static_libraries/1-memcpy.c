#include "main.h"

/**
  *_memcpy - copies n bytes from mem area src to mem area dest
  * @dest: copy location
  * @src: mem area to be copied
  * @n: number of bytes
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
