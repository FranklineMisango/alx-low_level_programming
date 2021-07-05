#include "holberton.h"

/**
 * print_chessboard - prints the chessboard
 * @a: an integer for the number of pieces
 * Return: chessboard
 */

void print_chessboard(char (*a)[8])
{
int x, y;

for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
_putchar(a[x][y]);
}
_putchar('\n');
}
}
