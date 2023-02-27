#include "main.h"

/**
 * _strlen - entry point
 * Description - Length of string
 * @s: Check the integer
 * Return: int
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
