#include "main.h"
#include <stdlib.h>

/**
 * array_range - entry point
 * Description - Create an array of integers
 * @min: first integer
 * @max: last integer
 * Return: array
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
