#include "main.h"

/**
 * *_strncpy - entry point
 * Description - Copy a string
 * @dest: 1st char
 * @src: 2nd char
 * @n: Int
 * Return: string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
