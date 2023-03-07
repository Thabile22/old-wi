#include "main.h"

/**
 * *_memcpy -entry point
 * Description - Copy memory area
 * @dest: 1st character
 * @src: 2nd character
 * @n: int
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ans = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ans);
}
