#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base.
 * @y: The exponent.
 *
 * Return: The result of x^y, or -1 for an error.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0) /* If y = negative, return -1 indicating error */
	return (-1);
	if (y == 0) /* Base case: */
	/* Any number raised to the power of 0 is 1 */
	return (1);

	return (x * _pow_recursion(x, y - 1)); /* Recursive calculation */
}

