#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: first string param
  * @s2: second str param
  * Return: Return  pointer to new mem location for contents of s1 and s2
  * if all goes well else NULL
  */

char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
	{
		s1[len1] = s2[len2];
		len1++;
		len2++;
	}
	s1[len1] = '\0';

	array = malloc(sizeof(s1) * len1 + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		*(array + i) = *(s1 + i);

	return (array);
}
