#include "main.h"
/**
 * print_alphabet - Print alphabets using _purchar
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
