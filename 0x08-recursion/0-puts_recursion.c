#include "main.h"

/**
 * _puts_recursion - entry point
 * Description - Print a srting, followed by new line
 * @s: input value
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
