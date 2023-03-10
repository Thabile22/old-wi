#include "main.h"

/**
 * check_match - entry point
 * Description - check for the match
 * @s1: input value
 * @s2: input value
 * Return: 1 if strings are identical, 0 otherwise
 */

int check_match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (check_match(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (check_match(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && check_match(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * wildcmp - entry point
 * Description - Compare the two srtings
 * @s1: input value
 * @s2: input value
 * Return: 1 if the strings are identical,  0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	return (check_match(s1, s2));
}
