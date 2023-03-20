#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description - Print name of file it was compiled from
 * Return: 0 Always
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
