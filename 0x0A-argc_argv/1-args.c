#include "main.h"

/**
  * main - prints the number of arguments passed to it
  * @argc: Number of arguments passed
  * @argv: arguments passed
  * Return: 0
  */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
