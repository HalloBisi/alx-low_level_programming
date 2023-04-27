#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @n: integer
 *
 * Return: Always last value of a digit
 */
int print_last_digit(int n)
{
	int m;

	l = m % 10;
	if (m < 0)
	{
		_putchar(-m + 48);
		return (m);
	}
	else
	{
		_putchar(m + 48);
		return (m);
	}
}
