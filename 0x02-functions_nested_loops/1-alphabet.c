#include "main.h"
/**
 * main - Print alphabets using _purchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 97; n <= 122; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	return (0);
}
