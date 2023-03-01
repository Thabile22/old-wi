#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point
 * Description - Print all natural from n to 98
 * @n: int
 * Return: int
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	printf("98\n");
}
