# include<stdio.h>

/**
 * main - main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int d, s;

	for (d = 48; s <= 56; s++)
	{
		for (d = 49; s <= 57; s++)
		{
			if (s > d)
			{
				putchar(d);
				putchar(s);
				if (d != 56 || s != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
