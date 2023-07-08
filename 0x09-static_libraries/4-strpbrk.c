#include "main.h"

/**
  * _strpbrk -  searches a string for any of a set of bytes
  * @s: string to be searched
  * @accept: bytes to be searched for
  * Return: pointer to byte in s if it matches one of the bytes in accept
  * else NULL
  */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
				return (s);
		s++;
	}
	return (NULL);
}
