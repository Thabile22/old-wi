#include "main.h"

/**
 * _strcpy - entry point
 * Description - Copy the string pointed by src
 * @dest: 1st character
 * @src: 2nd character
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *p = dest;

	while (*src != '\0')
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (dest);
}
