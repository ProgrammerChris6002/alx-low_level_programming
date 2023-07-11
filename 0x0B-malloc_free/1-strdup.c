#include "main.h"

char *_strdup(char *str)
{
	char *array;
	int len = 0;
	int i;

	while (str[len])
		len++;

	if (str == NULL)
		return (NULL);
	
	array = (char *) malloc(sizeof(str) * len);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		*(array + i) = *(str + i);

	return (array);
}
