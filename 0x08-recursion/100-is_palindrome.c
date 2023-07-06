#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: The string
  * Return: String length
  */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
  * is_palindrome - checks if a string is a palindrome or nor
  * @s: string parameter
  * Return: returns 1 if a string is a palindrome and 0 if not
  */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
		return (1);
	else if (*s != *(s + length - 1))
		return (0);
	else
		return (is_palindrome(s + 1));
}

