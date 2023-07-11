#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: width of grid
  * @height: height of grid
  * Return: pointer to a 2 dimensional array of integers if all goes well
  * else NULL
  */

int **alloc_grid(int width, int height)
{
	int w, h;
	int i, j;
	int **array;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
			array[h][w] = 0;
	}

	return (array);
}
