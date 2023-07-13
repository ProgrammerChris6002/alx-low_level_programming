#include "main.h"

/**
  * argstostr - concatenates all the arguments of the program
  * @ac: arg count
  * @av: arg vector
  * Return: Returns a pointer to a new string, or NULL if it fails
  */

char *argstostr(int ac, char **av)
{
	int i, j, total_len = 0, len = 0, index = 0;
	char *array;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		while (av[i][len])
			len++;
		total_len += len + 1;
		len = 0;
	}
	array = malloc(sizeof(char) * total_len + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			array[index++] = av[i][j++];
		array[index++] = '\n';
	}

	array[index] = '\0';

	return (array);
}
