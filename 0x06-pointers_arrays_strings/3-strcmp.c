#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: An integer
  */

int _strcmp(char *s1, char *s2)
{
	int len;

	len = 0;
	while (s1[len] != '\0' && s2[len] != '\0')
	{
		if (s1[len] != s2[len])
			return (s1[len] - s2[len]);
		len++;
	}
	return (0);
}
