#include <stdio.h>
/**
 * main - entry point
 * Description : 'Print all possible combinations of two two-digit numbers'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 48; n <= 55; n++)
	{
		for (m = n + 1; m <= 56; m++)
		{
			for (o = m + 1; o <= 57; o++)
			{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n == 55 && m == 56 && o == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
