#include "main.h"
/**
*_memset- Fills memoey with a constant byte
*@s: starting address of memeoryto be filled
*@b: value to be filles
*@n: number of bytes to be filled
*Return: void
*/
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
