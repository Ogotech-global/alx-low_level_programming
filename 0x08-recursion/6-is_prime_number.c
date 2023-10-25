#include "main.h"

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	return (0); /* 0 and 1 are not prime numbers */
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check if an integer is prime.
 * @n: The integer to be checked.
 * @divisor: The current divisor for checking divisibility.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor * divisor > n)
	return (1); /* n is prime */
	if (n % divisor == 0)
	return (0); /* n is not prime (divisible by divisor) */
	return (is_prime_helper(n, divisor + 1));
}

