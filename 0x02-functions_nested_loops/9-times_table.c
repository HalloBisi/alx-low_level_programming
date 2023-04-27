#include "main.h"
/**
 * times_table - print the 9 times table starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = b * a;
			if (b == 0)
			{
				_putchar(c + 48);
			}

			if (k <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + 48);
			} else if (k > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + 48);
				_putchar((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}


