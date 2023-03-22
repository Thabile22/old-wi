#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - entry point
 * Description - Execute a function given as a parameter
 * on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to fuction to execute each element
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
