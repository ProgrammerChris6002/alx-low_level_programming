#include "main.h"

/**
  * print_chessboard - prints a chessboard
  * @a: Number of rows
  */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < *a; i++)
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
}
