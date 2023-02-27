#include "main.h"

/**
 * rev_string - entry point
 * Description - Reverse string
 * @s: Check the int
 * Return: char
 */

void rev_string(char *s)
{
	int len, i, j;
	char temp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
