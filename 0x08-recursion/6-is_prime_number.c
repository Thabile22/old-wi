#include "main.h"

/**
 * is_divisible - entry point
 * Description - Prime number
 * @n: first int
 * @div: second int
 * Return: 1 if result is a prime number, 0 otherwise
 */

int is_divisible(int n, int div)
{
	if (div == 1 || div == n)
	{
		return (0);
	}
	if (n % div == 0)
	{
		return (1);
	}
	return (is_divisible(n, div - 1));
}

/**
 * is_prime_number - entry point
 * Description - Prime number
 * @n: integer
 * Return: 1 if result is prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	return (!is_divisible(n, n - 1));
}
