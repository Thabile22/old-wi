#include "main.h"

/**
 * *_memset - entry point
 * Description - Fill memory with a constant byte
 * @s: 1st charcter
 * @b: 2nd charcter
 * @n: int
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
