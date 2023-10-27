#include "main.h"
/**
 *  _isdigit - Checks if a character is a digit (0 - 9)
 * @c: This is the function parameter
 * Return: 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

