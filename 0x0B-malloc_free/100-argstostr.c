#include "main.h"

/**
 * argstostr - function that concatenates arguments of a program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, z = 0;
	int count = 0;
	char *output;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	output = malloc(sizeof(char) * count + 1);
	if (output == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			output[z] = av[i][j];
			z++;
		}
		output[z++] = '\n';
	}
	output[z] = '\0';
	return (output);
}
