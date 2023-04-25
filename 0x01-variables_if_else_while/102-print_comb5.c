#include <stdio.h>
/** 
 * main - entry point
 * Description: 'Print all possible combinations of two two-digit numbers'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int m;
	int o;
	int p;
	
	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (o = 48; o <= 57; o++)
			{
			for (p = o + 1; p <= 57; p++)	
			{
			if (n == m || m > n)
				if (m == o || o > m)
				      if (o == p || p > o)	
			putchar(n);
			putchar(m);
			putchar(' ');
			putchar(o);
			putchar(p);
			
			if (n == 57 && m == 57)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
}
			putchar('\n');
			return (0);
			}
