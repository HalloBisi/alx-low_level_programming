#include <stdio.h>
/**
 * main - ntry point
 * Description: 'Print the lowercase alphabet reverse'
 * Return: always 0 (success)
 */
int main(void)
{
	int n=122;
	 
	while(n>=97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
} 
