#include "main.h"

/**
 * print_square - function prints a square
 * @size: size of the square
 * Return: (void)
 */

void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int k, t;

		for (k = 1 ; k <= size ; k++)
		{
			for (t = 1 ; t <= size ; t++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
