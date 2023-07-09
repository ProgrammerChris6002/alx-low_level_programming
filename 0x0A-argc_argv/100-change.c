#include "main.h"
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change for an amount
  * of money
  * @argc: arg count
  * @argv: arg vector
  * Return: 0 if it's a number else 1
  */

int main(int argc, char *argv[])
{
	int count = 0, num2;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num2 = atoi(argv[1]);
	if (atoi(argv[1]) <= 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	change(num2, count);
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

/**
  * change - does the calculation to shorten main
  * @num2: number param
  * @count: minimum number of coins needed
  */

void change(int num2, int count)
{
	while (num2 > 0)
	{
		if (num2 >= 25)
		{
			num2 -= 25;
			count++;
		}
		else if (num2 >= 10)
		{
			num2 -= 10;
			count++;
		}
		else if (num2 >= 5)
		{
			num2 -= 5;
			count++;
		}
		else if (num2 >= 2)
		{
			num2 -= 2;
			count++;
		}
		else
		{
			num2 -= 1;
			count++;
		}
	}
	printf("%d\n", count);
}
