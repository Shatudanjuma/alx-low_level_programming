#include "main.h"

/**
*print_alphabet_x10 - Print lowercase alphabet 10 times
 */
void print_alphabet_x10(void)

{
	char num;
	char c;

	for (num = 0; num <= 9; num++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
