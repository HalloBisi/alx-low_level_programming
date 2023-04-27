#include <stdio.h>
/**
 * main - entry point
 *
 * Description: 'List all natural numbers below 10 that are multiples of 3, 5
 * and prints the sum of the multiples below 1024'
 *
 * Return: Always 0
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			sum += n;
	}

	printf("%d\n", sum);

		return (0);
}
