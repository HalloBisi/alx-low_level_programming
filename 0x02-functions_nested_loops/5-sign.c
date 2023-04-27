#include "main.h"
/**
 * print_sign - prints the sign of the number. Show 1 and prints +
 * n greater than  0
 * prints 0 if n is 0
 * prints -1 if n is less than 0
 *
 * @n: The character is ASCII code
 *
 * Return: 1 for n>0 0 for 0 and -1 for n<0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
