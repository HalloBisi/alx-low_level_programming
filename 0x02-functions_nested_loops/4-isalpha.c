#include "main.h"
/**
 *_isalpha - Shows 1 if the input is a
 * letter, uppercase and lowercase.
 * Another case shows 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for letter. 0 for the rest
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
