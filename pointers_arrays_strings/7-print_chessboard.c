#include "main.h"
/**
 * print_chessboard - funtion that prints a cheesboard
 * @a: array of chess pieces
 * return: void
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
if ((i + j) % 2 == 0)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
}
