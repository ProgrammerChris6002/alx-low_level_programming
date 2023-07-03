#include "main.h"

/**
  * _memset - fills memory area with a constant byte
  * @s: memory area
  * @b: constant byte
  * @n: number of bytes
  * Return: 0
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	int n2 = n;

	while (s[i] != '\0' && i < n2)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
