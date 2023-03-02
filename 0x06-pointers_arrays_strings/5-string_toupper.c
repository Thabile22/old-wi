#include "main.h"

/**
 * *string_toupper - entry point
 * Description - Change all the lowercase letters of a string to uppercase
 * @str: input value
 * Return: char
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
