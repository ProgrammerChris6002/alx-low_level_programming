#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: string 1
  * @s2:string 2
  * @n: number of bytes to concat
  * Return: returns a pointer to the allocated memory
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int i, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2] && n > 0)
	{
		len2++;
		n--;
	}

	array = malloc(sizeof(char) * len1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		array[i] = s1[i];
	for (i = 0; i < len2; i++)
		array[i + len1] = s2[i];
	array[len1 + len2] = '\0';

	return (array);
}
