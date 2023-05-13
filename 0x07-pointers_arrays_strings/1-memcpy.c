#include "main.h"
/**
*_memcpy - copies memory area
*@dest: where memory is stored
*@src: where memory is copied
*@n: number of bytes
*Return: copied memory with n bytes changed
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;

	for (; n > 0; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
