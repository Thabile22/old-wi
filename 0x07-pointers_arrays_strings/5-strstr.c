#include "main.h"

/**
 * *_strstr - entry point
 * Description - Locate a substring
 * @haystack: 1st input value
 * @needle: 2nd input value
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
