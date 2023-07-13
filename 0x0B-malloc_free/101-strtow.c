#include "main.h"

/**
  * strtow - returns a pointer to an array of strings (words)
  * @str: string of words
  * Return: returns a pointer to an array of strings (words) if all goes well
  * else NULL
  */

char **strtow(char *str)
{
	int i, len = 0, rows = 0;
	char **array;

	if (str == NULL || str == "")
		return (NULL);

	while (str[rows] != "\0")
	{
		if (str[rows] == " ")
			rows++;
	}

	array = malloc(sizeof(char *) * (rows + 1));
	if (array == NULL)
		return (NULL);

	return (array);
}
