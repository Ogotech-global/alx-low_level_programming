#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which to calculate the factorial.
 *
 * Return: The factorial of the number, or -1 for an error.
 */
int factorial(int n)
{
	if (n < 0) /* If n is negative, return -1 to indicate an error */
	return (-1);
	if (n == 0) /* Base case: Factorial of 0 is 1 */
	return (1);
	return (n * factorial(n - 1)); /* Recursive calculation */
}

