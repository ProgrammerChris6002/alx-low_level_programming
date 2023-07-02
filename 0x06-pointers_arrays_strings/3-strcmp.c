#include "main.h"

/**
  * _strcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: An integer
  */

int _strcmp(char *s1, char *s2)
{
	int len1;
	int len2;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (len1 > len2)
		return (15);
	else if (len1 < len2)
		return (-15);
	return (0);
}
