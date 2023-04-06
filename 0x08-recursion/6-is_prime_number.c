#include "main.h"

int prime_number(int g, int i);
/**
 * is_prime_number - return prime number
 * @n: number
 * Return: zero or one
 */
int is_prime_number(int n)
{
	if ( n < 0 || n == 1)
	{
		return(0);
	}

	return(prime_number(n, n - 1));
}

/**
 * prime_number - return prime
 * @g: number
 * @i: iterator
 * Return: zero or one
 */
int prime_number(int g, int i)
{
	if ( i == 1)
	{
		return (1);
	}
	if (g % i == 0 && i > 0)
	{
		return (0);
	}
	return (prime_number(g, i - 1));
}
