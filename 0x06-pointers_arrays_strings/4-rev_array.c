#include "main.h"

/**
 * reverse_array - entry point
 * Description - Reverse the content of an array of integers
 * @a: First int
 * @n: Second int
 * Return: int
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = temp;
	}
}
