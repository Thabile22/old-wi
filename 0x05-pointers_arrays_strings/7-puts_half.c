#include "main.h"

/**
 * puts_half - entry point
 * Description - Print half of a string
 * @str: Check char
 * Return: char
 */

void puts_half(char *str)
{
	int len = 0;
	int n, i;
	char *p = str;

	while (*p != '\0')
	{
		len++;
		p++;
	}
	n = (len - 1) / 2 + 1;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
