#include <stdio.h>
/**
 * main - entry point
 * Description: 'Print all single digit numbers starting from 0 using putchar'
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
