#include "main.h"

/**
  * main - Entry point for the program
  * @argc: The number of command-line arguments
  * @argv: An array of command-line argument strings
  * Return: 0 on success, 98 on error
  */

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	multiply(argv[1], argv[2]);

	return (0);
}

/**
  * is_digit - Checks if a string contains only digits
  * @str: The string to check
  * Return: 1 if the string contains only digits, 0 otherwise
  */

int is_digit(char *str)
{
	if (!str)
		return (0);

	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
  * str_len - Calculates the length of a string
  * @str: The string
  * Return: The length of the string
  */

int str_len(char *str)
{
	int len = 0;

	while (str[len])
		len++;
	return (len);
}

/**
  * multiply - Multiplies two positive numbers represented as strings
  * @num1: The first number
  * @num2: The second number
  */

void multiply(char *num1, char *num2)
{
	int len1 = str_len(num1);
	int len2 = str_len(num2);
	int len_res = len1 + len2;
	int i, j, carry, product;
	int *result;

	result = malloc(sizeof(int) * len_res);
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < len_res; i++)
		result[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + carry
				+ result[i + j + 1];
			carry = product / 10;
			result[i + j + 1] = product % 10;
		}
		result[i + j + 1] += carry;
	}

	for (i = 0; i < len_res - 1; i++)
		printf("%d", result[i]);
	printf("%d\n", result[i]);

	free(result);
}
