#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Start point
 * @grid: Specifies the pointer
 * @height: Specifies the altura
 */

void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
