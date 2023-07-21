#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers from 0 to 14
 * Return: (void)
 */

void more_numbers(void)
{
	int e;
	int d;

	for (e = 0 ; e < 10 ; e++)
	{
		for (d = 0 ; d <= 14 ; d++)
		{
			if (d > 9)
				_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');
		}
		_putchar('\n');
	}
}
