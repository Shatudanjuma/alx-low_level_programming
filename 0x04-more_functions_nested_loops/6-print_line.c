#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character 'n' will be printed
 * Return: (void)
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int m;

		for (m = 1 ; m <= n ; m++)
			_putchar('_');
		_putchar('\n');
	}
}
