#include "function_pointers.h"

/**
  * int_index - searches for an integer
  * @array: array to be searched
  * @size: size of array
  * @cmp: function to compare array values
  * Return: 0 if all is well else 1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	return (-1);
}
