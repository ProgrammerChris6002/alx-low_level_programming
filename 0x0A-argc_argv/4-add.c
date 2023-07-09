#include "main.h"
#include <stdlib.h>

/**
  * main - adds two numbers
  * @argc: arg count
  * @argv: arg vector
  * Return: 0 if it's a number else 1
  */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if ((isNumber(argv[i]) == 1))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}

/**
  * isNumber - checks if a string is a valid number
  * @str: string to be checked
  * Return: Returns 1 is it's an integer, else 0
  */

int isNumber(const char *str)
{
	char *endptr;

	strtol(str, &endptr, 10);

	if (*endptr != '\0')
		return (0);

	return (1);
}
