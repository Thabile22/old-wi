#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - entry point
 * Description - Allocate memory using malloc
 * @b: input value
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr  == NULL)
		exit(98);
	return (ptr);
}
