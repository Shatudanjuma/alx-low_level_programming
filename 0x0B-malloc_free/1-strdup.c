#include "main.h"

/**
 * _strdup - copies string to newly alloated space in memory
 * @str: string to copy to new memory
 * Return: pointer to a new memory
 */

char *_strdup(char *str)
{
	int d;
	char *copy;
	int count = 0;

	if (str == NULL)
		return (NULL);

	for (d = 0; str[d] != '\0'; d++)
		count++;

	copy = malloc(sizeof(char) * count + 1);

	if (copy == NULL)
		return (NULL);
	for (d = 0; str[d] != '\0'; d++)
		copy[d] = str[d];

	return (copy);
}
