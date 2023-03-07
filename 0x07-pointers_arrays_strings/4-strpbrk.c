#include "main.h"

/**
 * _strpbrk - entry point
 * Description - Search a string for any of a set bytes
 * @s: input value
 * @accept: input value
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
