#include "main.h"

/**
 * actual_prime - Determines if a number is prime recursively.
 * @n: Number to evaluate.
 * @i: Iterator.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime(n, i - 1));
}

/**
 * is_prime_number - Determines if a number is prime or not.
 * @n: Number to evaluate.
 *
 * Return: 1 if n is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}
