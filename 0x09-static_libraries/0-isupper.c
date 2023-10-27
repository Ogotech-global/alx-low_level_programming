#include "main.h"
/**
 * _isupper - Check for uppercase character
 * @c: This is the functio parameter
 * Return: 1 on success or 0 on failure
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
