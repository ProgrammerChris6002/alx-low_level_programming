#include "main.h"

/**
  * _memset - fills memory area with a constant byte
  * @s: memory area
  * @b: constant byte
  * @n: number of bytes
  * Return: s
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (s[i] != '\0' && i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
