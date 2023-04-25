#include <stdio.h>
/**
 * main - entry point
 * Description: 'Prints all possible combinations of two digits'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (m = n + 1; m <= 57; m++)
	{
		if (n == m || m > n)
		{
		putchar(n);
		putchar(m);
		if (n == 56 && m == 57)
		{
			continue;
		}
			putchar(',');
			putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
