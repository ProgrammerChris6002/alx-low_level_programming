#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: lowest value
  * @max: highest value
  * Return: pointer to the newly created array
  */

int *array_range(int min, int max)
{
	int *array, len, i;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	array = malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		array[i] = min;

	return (array);
}
