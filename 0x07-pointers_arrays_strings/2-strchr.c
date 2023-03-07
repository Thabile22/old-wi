#include "main.h"

/**
 * *_strchr - entry point
 * Description - Locate a character in a string
 * @s: input value
 * @c: input value
 * Return: char
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
