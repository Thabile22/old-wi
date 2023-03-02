#include "main.h"

/**
 * *_strncat - entry point
 * Description - Concatenates two strings
 * @dest: 1st char
 * @src: 2nd char
 * @n: Integer
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}
	while (*src != '\0' && n-- > 0)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
