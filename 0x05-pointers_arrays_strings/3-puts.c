#include "main.h"

/**
 * _puts - entry point
 * Description - Print a string to stdout
 * @str: Check the string data type
 * Return: str
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
