#include <stdio.h>

/**
 * main- Entry point
 * Description: The alphabet game
 * Return: 0
 *
 */

int main(void)
{
	chra c = 'a';

	while (c <= 'z')
	{
		putchar (c);
		c++;
	}
	putchar ('\n');
	return (0);
}
