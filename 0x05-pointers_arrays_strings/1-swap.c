#include "main.h"
/**
*swap_int - Swap the values of integers
*@a: integer 1
*@b: integer 2
*Return: 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
