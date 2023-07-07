#include "main.h"

/**
  * wildcmp - compares two strings
  * @s1: first string
  * @s2: second string
  * Return: returns 1 if the strings can be considered identical
  * otherwise return 0
  */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		else if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));
		else if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	else if (*s1 == *s2)

	{
		if (*s1 == '\0')
			return (1);
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
