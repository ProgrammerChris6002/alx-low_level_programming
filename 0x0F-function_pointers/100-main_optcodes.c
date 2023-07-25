#include "function_pointers.h"

/**
  * main - Prints the optcodes of its own main function
  * @argc: The number of arguments passed to the program
  * @argv: An array of strings containing the arguments
  * Return: Always 0
  */

int main(int agrc, char *argv[])
{
	int num_bytes, i;
	unsigned char *main_ptr = (unsigned char* )main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", main_ptr[i]);
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
