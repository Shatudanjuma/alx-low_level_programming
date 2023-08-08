#include "main.h"

/**
 * str_concat - function to concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to new allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int t;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (t = 0; s1[t] != '\0'; t++)
		s1len++;
	for (t = 0; s2[t] != '\0'; t++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (output == NULL)
		return (NULL);
	for (t = 0; s1[t] != '\0'; t++)
		output[t] = s1[t];
	for (t = 0; s2[t] != '\0'; t++)
		output[s1len + t] = s2[t];
	return (output);
}
