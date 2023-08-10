#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 * @n: number of bytes to concatenate from s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	unsigned int t;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (t = 0; s1[t] != '\0'; t++)
		s1len++;
	for (t = 0; s2[t] != '\0'; t++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + n) + 1);

	if (output == NULL)
		return (NULL);
	if (n >= s2len)
	{
	for (t = 0; s1[t] != '\0'; t++)
		output[t] = s1[t];
	for (t = 0; s2[t] != '\0'; t++)
		output[s1len + t] = s2[t];
	output[s1len + 1] = '\0';
	}
	else
	{
		for (t = 0; s1[t] != '\0'; t++)
			output[t] = s1[t];
		for (t = 0; t < n; t++)
			output[s1len + t] = s2[t];
		output[s1len + t] = '\0';
	}
	return (output);

}
