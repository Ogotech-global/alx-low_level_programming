#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @str: The string to encode.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
	char *ptr = str;
	char original, encoded;

	while (*ptr)
	{
	original = *ptr;
	if ((original >= 'a' && original <= 'z') ||
	(original >= 'A' && original <= 'Z'))
	{
	if (original >= 'a' && original <= 'm')
	encoded = original + 13;
	else if (original >= 'A' && original <= 'M')
	encoded = original + 13;
	else
	encoded = original - 13;

		*ptr = encoded;
	}

	ptr++;
	}

	return (str);
}

