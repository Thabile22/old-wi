#include "main.h"

/**
 * swap_int - entry point
 * Description - Swap the values of the two integers
 * @a: 1st int
 * @b: 2nd int
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int digit = *a;
	*a = *b;
	*b = digit;
}
