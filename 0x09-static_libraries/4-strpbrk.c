#include "main.h"
/**
*_strpbrk - Searches a string for any set of bytes
*@s: Input value
*@accept: Inout value
*Return: Always 0 success
*/
char *_strpbrk(char *s, char *accept)
{
	int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');

}
