#include "main.h"

/**
 * print_line - Entry point
 * Description - Draw a straight line
 * @n: Checks the int
 * Return: int
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
