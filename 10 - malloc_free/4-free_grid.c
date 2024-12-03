#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees a 2D grid previously created
 *@grid: array we want to free
 *@height: of the array
 *
 * Return: pointer (Success), NULL (Error)
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
