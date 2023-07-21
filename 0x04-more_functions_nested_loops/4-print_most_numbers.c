#include "main.h"

/**
 * print_most_numbers - function that prints from 0 to 9 except 2 and 4
 * Return: (void)
 */

void print_most_numbers(void)
{
	int s;

	for (s = 0 ; s < 10 ; s++)
	{
		if (s != 2 && s != 4)
			_putchar(s + '0');
	}
	_putchar('\n');
}
