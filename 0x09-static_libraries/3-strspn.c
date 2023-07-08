#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: string to be checked
  * @accept: words to be counted
  * Return: number of bytes in s consisting only of bytes from accept
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	int i = 0;

	while (*s != '\0' && found)
	{
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		s++;
	}
	return (count);
}
