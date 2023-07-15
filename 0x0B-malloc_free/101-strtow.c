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

/**
  * count_words - helps the strtow function count the number of words in str
  * @str: string that contains word
  * Return: number of words
  */

static int count_words(char *str)
{
	int i, count = 0;
	int in_word = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (str[i] == ' ')
			in_word = 0;
	}

	return (count);
}

/**
  * strtow - returns a pointer to an array of strings (words)
  * @str: string of words
  * Return: returns a pointer to an array of strings (words) if all goes well
  * else NULL
  */

char **strtow(char *str)
{
	int i, j, len, total_len = 0, rows = 0;
	char **array;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	if (_strcmp(str, " ") != 0)
		return (NULL);

	rows = count_words(str);

	array = malloc(sizeof(char *) * (rows + 1));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < rows; i++)
	{
		len = 0;
		while (str[total_len] == ' ')
			total_len++;
		while (str[total_len] != ' ' && str[total_len] != '\0')
		{
			len++;
			total_len++;
		}

		array[i] = malloc(sizeof(char) * len + 1);
		if (array[i] == NULL)
			return (NULL);

		for (j = 0; j < len; j++)
		{
			array[i][j] = str[total_len - len + j];
		}
		array[i][j] = '\0';
	}
	array[rows] = NULL;

	return (array);
}
