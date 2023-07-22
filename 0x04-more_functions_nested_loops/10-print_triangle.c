#include "main.h"
/**
 * print_triangle - function prints a triangle
 * @size: size of the triangle
 * Return: (void)
 */

void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int x, y;

		for (x = 1 ; x <= size ; x++)
		{
			for (y = 1 ; y <= size ; y++)
			{
				if (y <= size - x)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
