#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Fibonacci Sequence whose value doesnt exceed 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	unsigned long int m, o, next, sum;

	m = 1;
	o = 2;
	sum = 0;

	for (n = 1; n <= 33; ++n)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		next = m + o;
		m = o;
		o = next;
	}

	printf("%lu\n", sum);

	return (0);
}
