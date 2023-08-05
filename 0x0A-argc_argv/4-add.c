#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int m, n;
	int sum = 0;

	if (argc == 1)
		printf("%d\n", 0);
	else
	{
		for (m = 1 ; m < argc ; m++)
		{
			for (n = 0 ; argv[m][n] != '\0' ; n++)
			{
				if (!(isdigit(argv[m][n])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[m]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
