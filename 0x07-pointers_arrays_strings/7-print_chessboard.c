#include "main.h"

/**
 * print_chessboard - Prints a chessboard
 * @a: The chessboard to be printed
 */

void print_chessboard(char (*a)[8])
{
	int y, z;

	for (y = 0; a[y][7]; y++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar(a[y][z]);
		}

		_putchar('\n');

	}
}
