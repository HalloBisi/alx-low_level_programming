#include "main.h"
/**
*more_numbers - prints 10x the numbers from 0 to 14 followed by a new line
*
*Return: void
*/
void more_numbers(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
				_putchar(49);
			_putchar(b % 10 + 48);
		}
		_putchar('\n');
	}
}
