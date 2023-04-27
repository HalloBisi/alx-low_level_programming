#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints the 1st 98 Fibonacci Sequence starting with 1 & 2
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int l = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);

	for (a = 1; a < 91; a++)
	{
		printf(",%lu", aft);
		aft += bef;
		bef = aft - bef;
	}
	bef1 = (bef / 1);
	bef2 = (bef % 1);
	aft1 = (aft / 1);
	aft2 = (aft % 2);

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", aft1 + (aft2 / l));
		printf("%lu", aft2 % 1);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
