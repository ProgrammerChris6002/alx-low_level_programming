#include "main.h"

/**
  * _strchr - checks for the occuence of a character in a string
  * @s: string to be checked
  * @c: character checked for
  * Return: pointer to first occurence of character c if found else NULL
  */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (&(s[i]));
		i++;
	}

	if (s[i] == c)
		return (&(s[i]));
	return (NULL);
}
