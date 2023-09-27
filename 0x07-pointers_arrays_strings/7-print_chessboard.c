#include "main.h"

/**
 * print_chessboard - to print a chess board
 * @a: var one
 * Return: (0)
 */

void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar(a[b][c]);
		}
		_putchar('\n');
	}
}
