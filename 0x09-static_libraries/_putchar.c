#include "main.h"

/**
  * A library is not a luxury but one of the necessities of life
  * @c: The character to print
  * Return: On success 1
  * On error, -1 is returned, and errno is set appropriately
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
