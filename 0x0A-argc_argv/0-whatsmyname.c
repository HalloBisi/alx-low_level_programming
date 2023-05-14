#include "main.h"
#include <stdio.h>
/**
*main -Entry point
*@argc: inout value
*@argv: input value
*Return: Always 0 success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
	return (0);
}
