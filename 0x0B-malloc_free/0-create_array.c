#include "main.h"

/**
 * create_array - function that creates an array of characters
 * @size: size of array
 * @c: character to be stored in array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *ary;

	if (size == 0)
		return (NULL);

	ary = malloc(sizeof(char) * size);

	if (ary == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		ary[m] = c;
	return (ary);
}
