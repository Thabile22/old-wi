#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _calloc -entry point
 * Description - Alocate memory of a function, using malloc
 * @nmemb: 1st int
 * @size: 2nd int
 * Return: ptr
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	void  *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;

	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);
}
