#include "main.h"
/**
 * _puts_recursion-puts function;
 * @a: input
 * Return: 0 success
 */
void _puts_recursion(char *a)
{
	if (*a)
	{
		_putchar(*a);
		_puts_recursion(a + 1);
	}
	else
		_putchar('\b');
}
