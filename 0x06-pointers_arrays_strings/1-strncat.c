#include <stdio.h>
#include "main.h"

/**
 * _strncat - function to concatenate n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of byte
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
