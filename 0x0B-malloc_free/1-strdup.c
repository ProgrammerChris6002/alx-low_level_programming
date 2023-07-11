#include "main.h"

/**
  * _strdup - duplicates a string
  * @str: string to be duplicated
  * Return: pointer to mem location of new str if all goes well else NULL
  */

char *_strdup(char *str)
{
	char *array;
	int len = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	array = malloc(sizeof(*str) * len);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(array + i) = *(str + i);

	return (array);
}
