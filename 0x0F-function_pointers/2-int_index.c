#include "function_pointers.h"

/**
 * int_index - entry point
 * Description - Search for an integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: is a pointer to the function to be used to compare values
 * Return: If size <= 0, return -1 or if no element matches return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}
