#include <stdio.h>
/**
*main - entry point
*Description: Print numbers from 1 to 100 followed by a new line
*Multiples of 3 print Fizz
*Multiples of 5 print Buzz
*multiples of both 3 and 5 print FizzBuzz
*Return: void
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 != 0)
		{
			printf(" Fizz");
		} else if (n % 5 == 0 && n % 3 != 0)
		{
			printf(" Buzz");
		} else if (n % 3 == 0 && n % 5 == 0)
		{
			printf(" FizzBuzz");
		} else if (n == 1)
		{
			printf("%d", n);
		} else
		{
			printf(" %d", n);
		}
	}
	printf("\n");

	return (0);
}
