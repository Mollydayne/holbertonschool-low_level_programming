#include <stdio.h>
#include "main.h"

/**
* print_chessboard - prints a chessboard in 8x8
*@a : 2D array representing the chessboard
*
* Return: nothing
*/
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
printf("%c", a[i][j]);
}
printf("\n");
}
}
