#include "function_pointers.h"

/**
 * print_name - entry point
 * Description - Print a name
 * @name: Print input value
 * @f: function input
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
