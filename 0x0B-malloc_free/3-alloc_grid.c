#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{
int **mee;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
mee = calloc(height, sizeof(int *));
if (mee == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
mee[x] = calloc(width, sizeof(int));
if (mee[x] == NULL)
{
for (; x >= 0; x--)
free(mee[x]);
free(mee);
return (NULL);
}
}
return (mee);
}
