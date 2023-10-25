#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 *
 * Return: The natural square root, or -1 for an error.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Error: Negative input */
	return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Helper function for recursive square root calculation.
 * @n: The number to calculate the square root for.
 * @guess: Current guess for the square root.
 *
 * Return: The natural square root, or -1 for an error.
 */
int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n) /* Base case: Found the square root */
	return (guess);
	if (guess * guess > n) /* Base case: No natural square root */
	return (-1);
	return (_sqrt_helper(n, guess + 1));
}
