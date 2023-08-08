#include "main.h"

/**
 * alloc_grid - 2 dimensional array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = malloc(sizeof(int *) * height);

	if (output == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		output[a] = malloc(sizeof(int) * width);

		if (output[a] == NULL)
		{
			free(output);
			for (b = 0; b <= height; b++)
				free(output[b]);
			return (NULL);

			for (b = 0; b < width; b++)
				output[a][b] = 0;
		}
	}
	return (output);
}
