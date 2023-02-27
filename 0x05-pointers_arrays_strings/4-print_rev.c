#include "main.h"

/**
 * print_rev - entry point
 * Description - Print string in reverse
 * @s: Check the int
 * Return: char
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
