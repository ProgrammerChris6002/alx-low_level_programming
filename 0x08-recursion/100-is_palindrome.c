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
  * _check_palindrome - Checks if a string is a palindrome recursively
  * @s: string to check
  * @start: The starting index
  * @end: the ending string
  * Return: 1 if the string is a palindrome, 0 otherwise
  */

int _check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (_check_palindrome(s, start + 1, end - 1));
}

/**
  * is_palindrome - checks if a string is a palindrome or nor
  * @s: string parameter
  * Return: returns 1 if a string is a palindrome and 0 if not
  */

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (_check_palindrome(s, 0, length - 1));
}
